/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 16:45:12 by calvares          #+#    #+#             */
/*   Updated: 2025/12/28 15:10:39 by calvares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

static t_stack_node	*last_node(t_stack_node **stack)
{
	t_stack_node	*node;

	node = *stack;
	if (!node)
		return (NULL);
	while (node)
	{
		if (node->next == NULL)
			return (node);
		node = node->next;
	}
	return (NULL);
}

static void	reverse_rotate(t_stack_node **a)
{
	t_stack_node	*first;
	t_stack_node	*new_last;
	t_stack_node	*last;

	if (!*a || !(*a)->next)
		return ;
	first = *a;
	last = last_node(a);
	new_last = last->prev;
	last->next = first;
	first->prev = last;
	last->prev = NULL;
	if (new_last)
		new_last->next = NULL;
	*a = last;
}

void	rra(t_stack_node **a)
{
	reverse_rotate(a);
	ft_printf("rra\n");
}

void	rrb(t_stack_node **b)
{
	reverse_rotate(b);
	ft_printf("rrb\n");
}

void	rrr(t_stack_node **a, t_stack_node **b)
{
	reverse_rotate(a);
	reverse_rotate(b);
	ft_printf("rrr\n");
}