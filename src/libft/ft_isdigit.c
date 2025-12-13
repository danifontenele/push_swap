/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 14:32:29 by calvares          #+#    #+#             */
/*   Updated: 2025/11/08 19:16:26 by calvares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/* int main(void)
{
	printf("D:		%d\n", ft_isdigit('D'));
	printf("4:		%d\n", ft_isdigit('4'));
	printf("~:		%d\n", ft_isdigit('~'));
	printf("new_line:	%d\n", ft_isdigit('\n'));
} */