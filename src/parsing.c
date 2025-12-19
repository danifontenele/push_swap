/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 20:07:34 by calvares          #+#    #+#             */
/*   Updated: 2025/12/19 13:00:16 by calvares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	is_validnbr(char *s)
{
	int	i;

	i = 0;
	if (s[i] == '\0')
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

long	int_to_long(char *av)
{
	long	nbr;
	int		sign;
	int		i;

	nbr = 0;
	sign = 1;
	i = 0;
	if (av[i] == '+' || av[i] == '-')
	{
		if (av[i] == '-')
			sign = -1;
		i++;
	}
	while (ft_isdigit(av[i]))
	{
		nbr = nbr * 10 + (av[i] - '0');
		i++;
	}
	return (nbr * sign);
}

int	parse(char *av)
{
	long	nbr;

	is_validnbr(av);
	nbr = int_to_long(av);
	if (nbr > INT_MAX || nbr < INT_MIN)
		error_and_exit();
	return ((int)nbr);
}
