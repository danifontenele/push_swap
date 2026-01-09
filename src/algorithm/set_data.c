/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_data.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 15:53:27 by calvares          #+#    #+#             */
/*   Updated: 2026/01/09 12:35:26 by calvares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	set_index(t_stack_node *a)
{
	int i;
	int	len;
	
	len = stack_len(a);
	i = 0;
	while (a)
	{
		a->index = i;
		if (i <= len / 2)
			a->above_median = true;
		else
			a->above_median = false;
		i++;
		a = a->next;
	}
}

void	target_node(t_stack_node *node, t_stack_node *node_b)
{
	t_stack_node	*best;
	t_stack_node	*tmp;

	best = NULL;
	tmp = node_b;
	while (tmp)
	{
		if (tmp->value < node->value)
		{
			if (!best || tmp->value > best->value)
				best = tmp;
		}
		tmp = tmp->next;
	}
	if (!best)
		node->target_node = find_max(node_b);
	else
		node->target_node = best;
}

void    set_push_cost(t_stack_node *a, t_stack_node *b)
{
	int				len_a;
	int				len_b;
	t_stack_node	*target;

	len_a = stack_len(a);
	len_b = stack_len(b);
	while (a)
	{
		target = a->target_node;
		if (a->above_median == true && target->above_median == false)
			a->push_cost = a->index + (len_b - target->index);
		else if (a->above_median == false && target->above_median == true)
			a->push_cost = target->index + (len_a - a->index);
		else if (a->above_median == true && target->above_median == true)
			if (a->index > target->index)
				a->push_cost = a->index;
			else
				a->push_cost = target->index;
		else
			if (len_a - a->index > len_b - target->index)
				a->push_cost = len_a - a->index;
			else
				a->push_cost = len_b - target->index;
		a = a->next;
	}
}

t_stack_node	*set_cheapest(t_stack_node *a)
{
	t_stack_node	*cheapest_node;

	if (!a)
		return ;
	cheapest_node = a;
	while (a)
	{
		a->cheapest = false;
		if (a->push_cost < cheapest_node->push_cost)
			cheapest_node = a;
		a = a->next;
	}
	cheapest_node->cheapest = true;
	return (cheapest_node);
}

t_stack_node	*find_min(t_stack_node **stack)
{
	t_stack_node	*min;
	t_stack_node	*tmp;

	tmp = *stack;
	min = tmp;
	while (tmp)
	{
		if (tmp->value < min->value)
			min = tmp;
		tmp = tmp->next;
	}
	return (min);
}
