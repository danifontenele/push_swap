/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 20:27:48 by calvares          #+#    #+#             */
/*   Updated: 2025/12/18 14:35:23 by calvares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	error_and_exit(void)
{
	ft_printf("Error\n");
	exit(1);
}

int	stack_len(t_stack_node *stack)
{
	int	size;

	if (!stack)
		return (0);
	size = 0;
	while(stack)
	{
		stack = stack->next;
		size++;
	}
	return (size);
}