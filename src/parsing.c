/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 20:07:34 by calvares          #+#    #+#             */
/*   Updated: 2025/12/14 21:57:25 by calvares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//Checar argumentos nao vazios:
	// So numeros (+ / -): OK
	// dentro de intmin intmax
	// sem duplicados
	// formato correto: OK

void	is_validnbr(char *s)
{
	int	i;

	i = 0;
	if (s[i] == '\0') // nao esta vazia
		error_and_exit();
	if ((s[i] == '+' || s[i] == '-') && ft_isdigit(s[i + 1]) == 0)
		error_and_exit();
	if (s[i] == '+' || s[i] == '-')
			i++;
	while (s[i])
	{
		if (ft_isdigit(s[i]) == 0)
			error_and_exit();
		i++;
	}
}

void	is_int_range(char *s)
{}

void	parse(int ac, char **av)
{
	char 	**tokens;
	int		i;
	int		used_split;

	used_split = 0;
	if (ac == 2)
	{
		tokens = split(av[1], ' ');
		if (!tokens)
			error_and_exit();
		used_split = 1;
	}
	else
		tokens = av[1];
	i = 0;
	while(tokens[i])
	{
		is_validnbr(tokens[i]);
		i++;
	}
	if (used_split == 1)
		free_split(tokens);
}
