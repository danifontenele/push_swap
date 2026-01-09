/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 16:45:17 by calvares          #+#    #+#             */
/*   Updated: 2026/01/09 16:03:18 by calvares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

static void	swap(t_stack_node **a)
{
	t_stack_node	*first;
	t_stack_node	*second;
	t_stack_node	*third;

	if (!a || !*a || !(*a)->next)
		return ;
	first = *a;
	second = (*a)->next;
	third = (*a)->next->next;
	second->next = first;
	second->prev = NULL;
	first->prev = second;
	first->next = third;
	if (third)
		third->prev = first;
	else
		first->next = NULL;
	*a = second;
}

void	sa(t_stack_node **a)
{
	swap(a);
	ft_printf("sa\n");
}

void	sb(t_stack_node **b)
{
	swap(b);
	ft_printf("sb\n");
}

void	ss(t_stack_node **a, t_stack_node **b)
{
	swap(a);
	swap(b);
	ft_printf("ss\n");
}