/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 13:57:27 by calvares          #+#    #+#             */
/*   Updated: 2025/12/19 13:54:41 by calvares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack_node	*a;
	/* t_stack_node	*b; */

	a = NULL;
	/* b = NULL; */
	if (ac < 2)
		return (1);
	if (ac == 2)
	{
		av = split2(av[1], ' ');
		a = init_stack_a(&a, av);
	}
	else	
		a = init_stack_a(&a, av + 1);
	//Verificar se 'a' stack esta em ordem:
		//Se nao, implementar o algoritmo
			// Checar para 2 numeros:
				// Se sim, trocar os dois numeros.
			// Checar para 3 numeros
				// Se sim, implementar nosso simples "sort three" algorythm
			// Checar se a stack tem mais de 3 numeros
				// Se sim, implementar Turk algorythm
	if (is_sorted(&a) == 0)
	{
		if (stack_len(a) == 2)
			write (1, "sa\n", 3);
	}
	return (0);
}
