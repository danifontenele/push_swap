/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 13:09:11 by calvares          #+#    #+#             */
/*   Updated: 2025/11/08 19:16:41 by calvares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

/* int main(void)
{
	printf("D:		%d\n", ft_isalpha('D'));
	printf("4:		%d\n", ft_isalpha('4'));
	printf("~:		%d\n", ft_isalpha('~'));
	printf("new_line:	%d\n", ft_isalpha('\n'));
} */