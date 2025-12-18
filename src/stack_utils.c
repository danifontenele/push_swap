/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 19:09:48 by calvares          #+#    #+#             */
/*   Updated: 2025/12/18 16:58:43 by calvares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack_node	*new_s_node(int value)
{
	t_stack_node	*node = malloc(sizeof(t_stack_node));
	if (!node)
		return (NULL);
	node->value = value;
	node->next = NULL;
	node->prev = NULL;
	node->index = -1;
	node->push_cost = 0;
	node->above_median = false;
	node->cheapest = false;
	node->target_node = NULL;
	return (node);
}

void	add_in_front(t_stack_node **stack, t_stack_node *new_node)
{
	if (!new_node)
		return ;
	new_node->prev = NULL;
	new_node->next = *stack;
	if (*stack)
		(*stack)->prev = new_node;
	*stack = new_node;
}

void	add_in_back(t_stack_node **stack, t_stack_node *new_node)
{
	t_stack_node *old_last;

	if (!new_node)
		return ;
	if (!*stack)
		*stack = new_node;
	else
	{
		old_last = stack_last(*stack);
		old_last->next = new_node;
		new_node->prev = old_last;
		new_node->next = NULL;
	}
}

t_stack_node	*stack_last(t_stack_node *stack)
{
	if (!stack)
		return (NULL);
	while (stack)
	{
		if (stack->next == NULL)
			return (stack);
		stack = stack->next;
	}
	return (NULL);
}