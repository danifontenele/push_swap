/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 15:17:49 by calvares          #+#    #+#             */
/*   Updated: 2026/02/10 15:17:52 by calvares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

static void	free_arguments(char **av)
{
	int	i;

	if (av)
	{
		i = 0;
		while (av[i])
			free(av[i++]);
	}
	free(av);
}

static void	free_stacks(t_stack_node **a, t_stack_node **b)
{
	t_stack_node	*next;

	while (*a)
	{
		next = (*a)->next;
		free(*a);
		(*a) = next;
	}
	while (*b)
	{
		next = (*b)->next;
		free(*b);
		(*b) = next;
	}
}

void	leaks_killer(t_stack_node *a, t_stack_node *b, char **av, int ac)
{
	if (ac == 2)
		free_arguments(av);
	free_stacks(&a, &b);
}
