/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   general_algorithm.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 19:53:31 by calvares          #+#    #+#             */
/*   Updated: 2026/01/07 16:23:24 by calvares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

static void	set_data(t_stack_node *a, t_stack_node *b)
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
	set_push_cost(a, b);
	set_cheapest(a);
}

void	the_algorithm(t_stack_node **a, t_stack_node **b)
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