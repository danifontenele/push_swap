/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 22:07:20 by calvares          #+#    #+#             */
/*   Updated: 2025/11/06 22:22:33 by calvares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief size-bounded string concatenation
 * 
 * This function concatenates strings with the same input
 * and it's designed to be safer, more consistent and 
 * less error prone replacements.
 * 
 * Therefore, strlcat appends string src to the end of dst.
 * 
 * strlcat takes the full size of the destination buffer and
 * guarantee NUL-termination if there is room.
 * 
 * @return Returns the total lenght of the string it tried to
 * create. It means the initial length of dst plus the length
 * of src.
 */
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dst_len >= dstsize)
		return (dstsize + src_len);
	i = 0;
	while (src[i] && i < (dstsize - 1 - dst_len))
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

/* int	main()
{
	char buffer[10] = "ABCDE";
	char buffer2[5] = "";
	const char *to_add = "1234567";
	size_t result;

	// Caso a string seja menor que o buffer
	printf("1) Caso nao a str para concaternar seja menor que o buffer\n");
	printf("Antes: buffer = \"%s\"\n", buffer);
	result = ft_strlcat(buffer, to_add, 10);
	printf("Depois: buffer = \"%s\"\n", buffer);
	printf("Retorno de strlcat: %zu\n", result);
	
	// Caso string seja maior que o buffer(estouro)
	printf("\n2) Caso a str para concatenar seja >= ao buffer\n");
	printf("Antes: buffer = \"%s\"\n", buffer2);
	result = ft_strlcat(buffer2, to_add, 5);
	printf("Depois: buffer = \"%s\"\n", buffer2);
	printf("Retorno de strlcat: %zu\n", result);
} */
