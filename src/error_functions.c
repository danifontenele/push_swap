/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 20:27:48 by calvares          #+#    #+#             */
/*   Updated: 2025/12/14 20:44:01 by calvares         ###   ########.fr       */
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