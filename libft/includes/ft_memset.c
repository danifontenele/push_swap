/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 20:55:03 by calvares          #+#    #+#             */
/*   Updated: 2025/11/08 19:41:24 by calvares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief fill a byte string 'b' with 'n' byte value 'c's.
 * 
 * the ft_memset() can be used to set a whole block
 * of memory to a particular value.
 * 
 * @param b Address of the string that receives the
 * second argument.
 * @param c Bytes to be writen in b.
 * @param n Number of bytes to be considered.
 * 
 * @return Returns its first argument
 */
void	*ft_memset(void *b, int c, size_t n)
{
	size_t	i;
	char	*dest;
	char	tempc;

	tempc = (char)c;
	dest = (char *)b;
	i = 0;
	while (i < n)
	{
		dest[i] = tempc;
		i++;
	}
	return (dest);
}

/* int	main(void)
{
	char buffer[10];
	char *buffer2 = NULL;
	int	i;

	// Preenchendo um buffer vazio
	printf("1) Preenchendo um buffer vazio:\n");
	ft_memset(buffer, 'a', sizeof(char) * 5);
	ft_memset(buffer + 5, 'b', sizeof(char) * 5);
	printf(" buffer antes: %c\n buffer[10] = ", buffer);
	i = 0;
	while (i < 10)
	{
		printf("%c", buffer[i]);
		i++;
	}
	// Caractere NULL:
	printf("\n\n2) Mandando caractere \'\0\':\n");
	ft_memset(buffer, '\0', 1);
	printf("\n buffer[0] = %p\n", buffer[0]);
	
	// buffer NULL:
	printf("\n3) Com buffer NULL:\n");
	ft_memset(buffer2, 'a', 1);
	printf(" %c\n", buffer2);
} */
