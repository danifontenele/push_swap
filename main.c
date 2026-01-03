/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 13:57:27 by calvares          #+#    #+#             */
/*   Updated: 2025/12/30 17:26:06 by calvares         ###   ########.fr       */
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
			sort_three(a);
		turk_algorythm(&a, &b);
	}
	return (0);
}
