/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 16:33:43 by calvares          #+#    #+#             */
/*   Updated: 2026/01/03 15:21:28 by calvares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack_node	*find_max(t_stack_node *stack)
{
	t_stack_node	*bigger;
	t_stack_node	*tmp;

	tmp = stack;
	bigger = stack;
	while (tmp)
	{
		if (tmp->value > bigger->value)
			bigger = tmp;
		tmp = tmp->next;
	}
	return (bigger);
}

void	sort_three(t_stack_node *stack)
{
	t_stack_node	*bigger;
	
	bigger = find_max(stack);
	if (bigger == stack)
		ra(&stack);
	else if (bigger == stack->next)
		rra(&stack);
	if (stack->value > stack->next->value)
		sa(&stack);
}