/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 20:07:36 by calvares          #+#    #+#             */
/*   Updated: 2025/12/27 22:03:32 by calvares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	pb(t_stack_node **a, t_stack_node **b)
{
	t_stack_node	*a_first;
	t_stack_node	*a_second;
	t_stack_node	*b_first;

	if (!*a)
		return ;
	a_first = *a;
	a_second = (*a)->next;
	b_first = *b;
	a_first->next = b_first;
	a_first->prev = NULL;
	if (b_first)
		b_first->prev = a_first;
	*b = a_first;
	if (a_second)
		a_second->prev = NULL;
	*a = a_second;
	ft_printf("pb\n");
}

void	pa(t_stack_node **a, t_stack_node **b)
{
	t_stack_node	*b_first;
	t_stack_node	*b_second;
	t_stack_node	*a_first;

	if (!*b)
		return ;
	b_first = *b;
	b_second = (*b)->next;
	a_first = *a;
	b_first->next = a_first;
	b_first->prev = NULL;
	if (a_first)
		a_first->prev = b_first;
	*a = b_first;
	if (b_second)
		b_second->prev = NULL;
	*b = b_second;
	ft_printf("pa\n");
}
