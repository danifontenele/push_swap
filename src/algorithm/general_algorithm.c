/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   general_algorithm.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 19:53:31 by calvares          #+#    #+#             */
/*   Updated: 2026/01/09 12:40:10 by calvares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	last_rotate(t_stack_node **a)
{
	t_stack_node	*smaller;

	smaller = find_min(a);
	set_index(*a);
	while (smaller != *a)
	{
		if (smaller->above_median == true)
			ra(a);
		else
			rra(a);
	}
}

static void to_top_of_a(t_stack_node **a, t_stack_node **b)
{
	t_stack_node	*target;
	t_stack_node	*tmp_a;

	tmp_a = *a;
	target = find_min(a);
	while (tmp_a)
	{
		if (tmp_a->value > (*b)->value && tmp_a->value < target->value)
			target = tmp_a;
		tmp_a = tmp_a->next;
	}
	while (target != *a)
	{
		if (target->above_median == true)
			ra(a);
		else
			rra(a);
	}
}

static void	move_to_top(t_stack_node **a, t_stack_node **b, t_stack_node *chpr)
{
	t_stack_node	*target;

	target = chpr->target_node;
	
	while (chpr != *a && target != *b)
	{
		if (chpr->above_median == true && target->above_median == true)
			rr(a, b);
		if (chpr->above_median == false && target->above_median == false)
			rrr(a, b);
	}
	while (chpr != *a)
	{
		if (chpr->above_median == true)
			ra(a);
		else
			rra(a);
	}
	while (target != *b)
	{
		if (target->above_median == true)
			rb(b);
		else
			rrb(b);
	}
}

static t_stack_node	*set_data(t_stack_node *a, t_stack_node *b)
{
	t_stack_node	*tmp_a;
	t_stack_node	*cheapest;

	tmp_a = a;
	set_index(a);
	set_index(b);
	while (tmp_a)
	{
		target_node(tmp_a, b);
		tmp_a = tmp_a->next; 
	}
	set_push_cost(a, b);
	cheapest = set_cheapest(a);
	return (cheapest);
}

void	the_algorithm(t_stack_node **a, t_stack_node **b)
{
	t_stack_node	*cheapest;
	
	pb(a, b);
	if (stack_len(a) > 4)
		pb(a, b);
	while (stack_len(a) > 3)
	{
		cheapest = set_data(*a, *b);
		move_to_top(a, b, cheapest);
		pb(a, b);
	}
	sort_three(*a);
	while (stack_len(b) != 0)
	{
		to_top_of_a(a, b);
		pa(a, b);
	}
	last_rotate(a);
}
