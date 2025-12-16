/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 19:09:48 by calvares          #+#    #+#             */
/*   Updated: 2025/12/16 15:32:57 by calvares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// find_last()
// find_min()
// find_max()
// Funcao que inicia uma lista duplamente encadeada.

t_node_s	*new_stack_node(int value)
{
	t_node_s	*result = malloc(sizeof(t_node_s));
	
	result->value = value;
	result->next = NULL;
	result->prev = NULL;
	return (result);
}

t_node_s	*add_on_top(t_node_s **head, t_node_s *new_s_node)
{
	new_s_node->next = *head;
	(*head)->prev = new_s_node;
	*head = new_s_node;
	return (new_s_node);
}
// Revisar funcao abaixo:
void	add_down(t_node_s *node_to_insert_after, t_node_s *new_s_node)
{
	new_s_node->next = node_to_insert_after->next;
	new_s_node->prev = node_to_insert_after;
	if (node_to_insert_after->next != NULL)
		node_to_insert_after->next->prev = new_s_node;
	node_to_insert_after->next = new_s_node;
}

int	stacklen(t_node_s *stack)// stack_len: OK
{
	int	counter;
	
	if (!stack)
		return (0);
	counter = 0;
	while (stack)
	{
		stack = stack->next;
		counter++;
	}
	return (counter);
}