/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 20:07:34 by calvares          #+#    #+#             */
/*   Updated: 2025/12/16 16:05:02 by calvares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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
{
	long	acc;
	int		i;
	long	limit;

	acc = 0;
	i = 0;
	limit = max_or_min(s, &i);
	while (s[i])
	{
		if (acc > limit / 10)
			error_and_exit();
		else if (acc == limit / 10 && (s[i] - '0') > limit % 10)
			error_and_exit();
		acc = acc * 10 + (s[i] - '0');
		i++;
	}
}

void	is_duplicated(int *s, int len)
{
	int	i;
	int	j;

	i = 0;
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (s[i] == s[j])
				error_and_exit();
			j++;
		}
		i++;
	}
}

void	apply_checkers(int *values, char **tokens)
{
	int	i;

	i = 0;
	while (tokens[i])
	{
		{
			is_validnbr(tokens[i]);
			is_int_range(tokens[i]);
			values[i] = ft_atoi(tokens[i]);
			i++;
		}
	}
	is_duplicated(values, i);
}

void	parse(int ac, char **av)
{
	char 	**tokens;
	int		i;
	int		used_split;
	int		*values;

	used_split = 0;
	if (ac == 2)
	{
		tokens = split(av[1], ' ');
		if (!tokens)
			error_and_exit();
		used_split = 1;
	}
	else
		tokens = av + 1;
	i = 0;
	while(tokens[i])
		i++;
	values = malloc(sizeof(int) * i);
	if (!values)
		error_and_exit();
	apply_checkers(values, tokens);
	free(values);
	if (used_split == 1)
		free_split(tokens);
}
