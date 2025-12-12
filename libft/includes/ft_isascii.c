/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 14:24:55 by calvares          #+#    #+#             */
/*   Updated: 2025/11/08 19:15:27 by calvares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/* int main(void)
{
	printf("D:		%d\n", ft_isascii('D'));
	printf("4:		%d\n", ft_isascii('4'));
	printf("~:		%d\n", ft_isascii('~'));
	printf("new_line:	%d\n", ft_isascii('\n'));
	printf("ÿ:		%d\n", ft_isascii(255));
} */
