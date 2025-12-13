/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 13:57:27 by calvares          #+#    #+#             */
/*   Updated: 2025/12/13 20:06:25 by calvares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	// Declarar e inicializar as stacks(pointers)
	t_stack_node	*a;
	t_stack_node	*b;

	a = NULL;
	b = NULL;

	if (ac == 1 || (ac == 2 && av[1][0] == '\0'))
		return (1);
	if (ac == 2)
		av = split(av[1], ' '); // Testado: OK!

	// Funcao que monta a stack 'a' adicionando os argumentos como um valor do node
		// lidar com int overflow, duplicatas, erros de sintaxe, inputs devem ter apenas digitos ou '-' '+'
			// Se encontrar erros, liberar 'a' e retornar Error
		// Verificar se cada input e um long int
			// Caso seja string, converter para long int
		// Anexar os nodes a stack 'a'

	//Verificar se 'a' stack esta em ordem:
		//Se nao, implementar o algoritmo
			// Checar para 2 numeros:
				// Se sim, trocar os dois numeros.
			// Checar para 3 numeros
				// Se sim, implementar nosso simples "sort three" algorythm
			// Checar se a stack tem mais de 3 numeros
				// Se sim, implementar Turk algorythm
	return (0);
}