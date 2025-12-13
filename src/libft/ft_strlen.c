/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 00:14:31 by calvares          #+#    #+#             */
/*   Updated: 2025/11/08 19:39:14 by calvares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/** 
 *@brief Find length of a string.
 *
 * The strlen computes the length of the string s.
 * 
 * @param s Pointer with the address of the first 
 * character of the string s
 * @return returns the number of charracters that 
 * precede the terminating NUL character.
 */
size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/* int main(void)
{
	char *str = "15 chars string";

	printf("length: %zu\n", ft_strlen(str));
} */