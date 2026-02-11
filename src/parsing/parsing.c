/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 20:07:34 by calvares          #+#    #+#             */
/*   Updated: 2026/02/11 15:16:28 by calvares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

static int	is_validnbr(char *s)
{
	int	i;

	i = 0;
	if (s[i] == '\0')
		return (ERROR);
	if ((s[i] == '+' || s[i] == '-') && ft_isdigit(s[i + 1]) == 0)
		return (ERROR);
	if (s[i] == '+' || s[i] == '-')
		i++;
	while (s[i])
	{
		if (ft_isdigit(s[i]) == 0)
			return (ERROR);
		i++;
	}
	return (SUCCESS);
}

static long	int_to_long(char *av)
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

int	parse(char *av, int *value)
{
	long	nbr;

	if (!is_validnbr(av))
		return (ERROR);
	nbr = int_to_long(av);
	if (nbr > INT_MAX || nbr < INT_MIN)
		return (ERROR);
	*value = (int)nbr;
	return (SUCCESS);
}
