/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 13:55:05 by calvares          #+#    #+#             */
/*   Updated: 2025/12/14 18:37:32 by calvares         ###   ########.fr       */
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
}	t_node_s;

// Handle errors
char	**split(char *str, char sep);

// Stack init

// Nodes init

// Stack utils

// Commands

// Algorythm

#endif