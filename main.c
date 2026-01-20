/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 13:57:27 by calvares          #+#    #+#             */
/*   Updated: 2026/01/20 16:22:03 by calvares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack_node	*a;
	t_stack_node	*b;

	a = NULL;
	b = NULL;
	if (ac < 2)
		return (1);
	if (ac == 2)
	{
		av = split2(av[1], ' ');
		a = init_stack_a(&a, av);
	}
	else
		a = init_stack_a(&a, av + 1);
	if (is_sorted(&a) == 0)
	{
		if (stack_len(a) == 2)
			sa(&a);
		else if (stack_len(a) == 3)
			sort_three(&a);
		else
			the_algorithm(&a, &b);
	}
	leaks_killer(a, b, av, ac);
	return (0);
}
