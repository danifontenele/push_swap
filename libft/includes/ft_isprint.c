/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 14:43:36 by calvares          #+#    #+#             */
/*   Updated: 2025/11/08 19:17:18 by calvares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/* int main(void)
{
	printf("D:		%d\n", ft_isprint('D'));
	printf("4:		%d\n", ft_isprint('4'));
	printf("~:		%d\n", ft_isprint('~'));
	printf("new_line:	%d\n", ft_isprint('\n'));
} */