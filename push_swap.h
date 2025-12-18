/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 13:55:05 by calvares          #+#    #+#             */
/*   Updated: 2025/12/18 17:14:03 by calvares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdbool.h>
# include <limits.h>
# include "src/ft_printf/ft_printf.h"
# include "src/libft/libft.h"

typedef struct s_node
{
	int					value;
	int					index;
	int					push_cost;
	bool				above_median;
	bool				cheapest;
	struct s_node	*target_node;
	struct s_node	*next;
	struct s_node	*prev;
}	t_stack_node;

// Handle errors
char	**split2(char *str, char sep);
int		parse(char *av);
void	error_and_exit(void);
void	free_split(char **tokens);
void	apply_checkers(int *values, char **tokens, int *len);
void	is_validnbr(char *s);
void	is_int_range(char *s);
long	max_or_min(char *s, int *i);
void	is_duplicated(t_stack_node *stack);

// Stack init
t_stack_node	*init_stack_a(t_stack_node **a, char **av);
void	append_node(t_stack_node **a, int value);

// Nodes init
t_stack_node	*new_s_node(int value);
void	add_in_front(t_stack_node **stack, t_stack_node *new_node);
void	add_in_back(t_stack_node **stack, t_stack_node *new_node);
t_stack_node	*stack_last(t_stack_node *stack);
// Stack utils

// Commands

// Algorythm

#endif