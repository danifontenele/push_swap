/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 13:13:15 by calvares          #+#    #+#             */
/*   Updated: 2026/01/13 13:48:59 by calvares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	is_sorted(t_stack_node **stack)
{
	t_stack_node	*i;

	i = *stack;
	if (!i || i->next == NULL)
		return (1);
	while (i && i->next != NULL)
	{
		if (i->value > i->next->value)
			return (0);
		i = i->next;
	}
	return (1);
}
