/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_data_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 15:10:23 by calvares          #+#    #+#             */
/*   Updated: 2026/02/10 15:42:31 by calvares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	set_push_cost_2(t_stack_node *a, t_stack_node *target,
	int len_a, int len_b)
{
	while (a != NULL)
	{
		target = a->target_node;
		if (a->above_median == true && target->above_median == false)
			a->push_cost = a->index + (len_b - target->index);
		else if (a->above_median == false && target->above_median == true)
			a->push_cost = target->index + (len_a - a->index);
		else if (a->above_median == true && target->above_median == true)
		{
			if (a->index > target->index)
				a->push_cost = a->index;
			else
				a->push_cost = target->index;
		}
		else
		{
			if (len_a - a->index > len_b - target->index)
				a->push_cost = len_a - a->index;
			else
				a->push_cost = len_b - target->index;
		}
		a = a->next;
	}
}
