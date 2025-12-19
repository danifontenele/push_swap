/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 19:29:03 by calvares          #+#    #+#             */
/*   Updated: 2025/12/19 12:59:53 by calvares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
void	is_duplicated(t_stack_node *stack)
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
				error_and_exit();
			j = j->next;
		}
		i = i->next;
	}
}

void	append_node(t_stack_node **a, int value)
{
	t_stack_node	*new;

	new = new_s_node(value);
	if (!new)
		error_and_exit();
	add_in_back(a, new);
}

t_stack_node	*init_stack_a(t_stack_node **a, char **av)
{
	int		i;
	int		value;

	value = 0;
	i = 0;
	while (av[i])
	{
		value = parse(av[i]);
		append_node(a, value);
		i++;
	}
	is_duplicated(*a);
	return (*a);
}