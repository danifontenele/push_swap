/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 13:57:27 by calvares          #+#    #+#             */
/*   Updated: 2026/02/11 15:38:12 by calvares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_stack_node	*set_stack_a(t_stack_node **a, char ***args, int ac)
{
	if (ac == 2)
	{
		*args = split2((*args)[1], ' ');
		return (init_stack_a(a, (*args)));
	}
	return (init_stack_a(a, (*args) + 1));
}

static void	sort_it(t_stack_node **a, t_stack_node **b)
{
	if (stack_len(*a) == 2)
		sa(a);
	else if (stack_len(*a) == 3)
		sort_three(a);
	else
		the_algorithm(a, b);
}

int	main(int ac, char **av)
{
	t_stack_node	*a;
	t_stack_node	*b;
	char			**args;

	a = NULL;
	b = NULL;
	args = av;
	if (ac < 2)
		return (1);
	if (!set_stack_a(&a, &args, ac))
	{
		free_and_error(a, b, args, ac);
		return (1);
	}
	if (!is_sorted(&a))
		sort_it(&a, &b);
	free_it_all(a, b, args, ac);
	return (0);
}
