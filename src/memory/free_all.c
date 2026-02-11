/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 15:17:49 by calvares          #+#    #+#             */
/*   Updated: 2026/02/11 15:36:57 by calvares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

static void	free_arguments(char **args)
{
	int	i;

	if (!args)
		return ;
	i = 0;
	while (args[i])
		free(args[i++]);
	free(args);
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

void	free_it_all(t_stack_node *a, t_stack_node *b, char **args, int ac)
{
	free_stacks(&a, &b);
	if (ac == 2)
		free_arguments(args);
}

void	free_and_error(t_stack_node *a, t_stack_node *b, char **args, int ac)
{
	free_it_all(a, b, args, ac);
	ft_printf("Error\n");
}
