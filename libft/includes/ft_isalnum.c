/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 14:35:21 by calvares          #+#    #+#             */
/*   Updated: 2025/11/08 19:15:34 by calvares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

/* int main(void)
{
	printf("D:		%d\n", ft_isalnum('D'));
	printf("4:		%d\n", ft_isalnum('4'));
	printf("~:		%d\n", ft_isalnum('~'));
	printf("new_line:	%d\n", ft_isalnum('\n'));
} */