/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 13:55:05 by calvares          #+#    #+#             */
/*   Updated: 2025/12/28 15:13:17 by calvares         ###   ########.fr       */
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

// Stack init
t_stack_node	*init_stack_a(t_stack_node **a, char **av);

// Nodes init
t_stack_node	*new_s_node(int value);
void			add_in_front(t_stack_node **stack, t_stack_node *new_node);
void			add_in_back(t_stack_node **stack, t_stack_node *new_node);
t_stack_node	*stack_last(t_stack_node *stack);
int				stack_len(t_stack_node *stack);

// Commands
void	sa(t_stack_node **a);
void	sb(t_stack_node **b);
void	ss(t_stack_node **a, t_stack_node **b);
void	pa(t_stack_node **a, t_stack_node **b);
void	pb(t_stack_node **a, t_stack_node **b);
void	ra(t_stack_node **a);
void	rb(t_stack_node **b);
void	rr(t_stack_node **a, t_stack_node **b);
void	rra(t_stack_node **a);
void	rrb(t_stack_node **b);
void	rrr(t_stack_node **a, t_stack_node **b);

// Algorythm
int		is_sorted(t_stack_node **stack);

#endif