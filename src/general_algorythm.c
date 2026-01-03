/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   general_algorythm.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 19:53:31 by calvares          #+#    #+#             */
/*   Updated: 2026/01/03 18:29:34 by calvares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	target_node(t_stack_node *node, t_stack_node *node_b)
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

void set_push_cost()
{
	
}

/* set_cheapest */

static void	set_index(t_stack_node *a)
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

void	set_data(t_stack_node *a, t_stack_node *b)
{
	t_stack_node	*tmp_a;
	
	tmp_a = a;
	set_index(a);
	set_index(b);
	while (tmp_a)
	{
		target_node(tmp_a, b);
		tmp_a = tmp_a->next; 
	}
	/* set_push_cost()
	set_cheapest() */
}

void	turk_algorythm(t_stack_node **a, t_stack_node **b)
{
	t_stack_node	*cheapest;
	
	pb(a, b);
	if (stack_len(a) > 4)
		pb(a, b);
	while (stack_len(a) > 3)
	{
		set_data(a, b);
	}
	sort_three(*a);
	// function to bring b back to a
	// code or function to rotate a until it's right
}