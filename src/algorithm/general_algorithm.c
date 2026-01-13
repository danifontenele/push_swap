/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   general_algorithm.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 19:53:31 by calvares          #+#    #+#             */
/*   Updated: 2026/01/13 13:38:08 by calvares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

static void	last_rotate(t_stack_node **a, int stack_len)
{
	t_stack_node	*smaller;

	set_index(*a);
	smaller = find_min(a);
	while (smaller->index != 0)
	{
		if (smaller->index < stack_len / 2)
			ra(a);
		else
			rra(a);
		set_index(*a);
	}
}

static void	to_top_of_a(t_stack_node **a, t_stack_node **b)
{
	t_stack_node	*target;
	t_stack_node	*tmp_a;
	int				len;

	tmp_a = *a;
	target = NULL;
	len = stack_len(*a);
	while (tmp_a)
	{
		if (tmp_a->value > (*b)->value
			&& (!target || tmp_a->value < target->value))
			target = tmp_a;
		tmp_a = tmp_a->next;
	}
	if (!target)
		target = find_min(a);
	while (target->index != 0)
	{
		if (target->index < len / 2)
			ra(a);
		else
			rra(a);
		set_index(*a);
	}
}

static void	move_to_top(t_stack_node **a, t_stack_node **b, t_stack_node *chpr)
{
	t_stack_node	*target;

	target = chpr->target_node;
	while (chpr != *a && target != *b
		&& chpr->above_median == target->above_median)
	{
		if (chpr->above_median)
			rr(a, b);
		else
			rrr(a, b);
	}
	while (chpr != *a)
	{
		if (chpr->above_median)
			ra(a);
		else
			rra(a);
	}
	while (target != *b)
	{
		if (target->above_median)
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
	if (stack_len(*a) > 4)
		pb(a, b);
	while (stack_len(*a) > 3)
	{
		cheapest = set_data(*a, *b);
		move_to_top(a, b, cheapest);
		pb(a, b);
	}
	sort_three(a);
	while (stack_len(*b) != 0)
	{
		set_index(*a);
		to_top_of_a(a, b);
		pa(a, b);
	}
	last_rotate(a, stack_len(*a));
}
