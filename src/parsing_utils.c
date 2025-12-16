/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 20:27:48 by calvares          #+#    #+#             */
/*   Updated: 2025/12/16 13:23:30 by calvares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	error_and_exit(void)
{
	ft_printf("Error\n");
	exit(1);
}

void	free_split(char **tokens)
{
	int	i;

	i = 0;
	while (tokens[i])
	{
		free (tokens[i]);
		i++;
	}
	free (tokens);
}

long	max_or_min(char *s, int *i)
{
	long	limit;
	int		sign;
	
	*i = 0;
	sign = 1;
	if (s[*i] == '-' || s[*i] == '+')
	{
		if (s[*i] == '-')
			sign = -1;
		(*i)++;
	}
	if (sign == 1)
		limit = INT_MAX;
	else
		limit = INT_MAX + 1;
	return (limit);
}