/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 16:53:38 by calvares          #+#    #+#             */
/*   Updated: 2025/11/06 20:11:36 by calvares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Writes zeros to a bye string or block of memory.
 * 
 * @param s base string were the zeros will be writen.
 * @param n number of zerosed bytes to write to the string s.
 */
void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = 0;
		i++;
	}
}

/* int main(void)
{
	char test[35] = "this is a string to turn into zeros";
	
	printf("%s\n", test);
	ft_bzero(test, 35);
	printf("%s\n", test);
} */