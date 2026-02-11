/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 19:29:03 by calvares          #+#    #+#             */
/*   Updated: 2026/02/11 15:37:26 by calvares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

static int	is_duplicated(t_stack_node *stack)
{
	t_stack_node	*i;
	t_stack_node	*j;

	i = stack;
	while (i)
	{
		j = i->next;
		while (j)
		{
			if (i->value == j->value)
				return (ERROR);
			j = j->next;
		}
		i = i->next;
	}
	return (SUCCESS);
}

static int	append_node(t_stack_node **a, int value)
{
	t_stack_node	*new;

	new = new_s_node(value);
	if (!new)
		return (ERROR);
	add_in_back(a, new);
	return (SUCCESS);
}

t_stack_node	*init_stack_a(t_stack_node **a, char **args)
{
	int		i;
	int		value;

	value = 0;
	i = 0;
	if (!args)
		return (NULL);
	while (args[i])
	{
		if (!parse(args[i], &value))
			return (NULL);
		if (!append_node(a, value))
			return (NULL);
		i++;
	}
	if (!is_duplicated(*a))
		return (NULL);
	return (*a);
}
