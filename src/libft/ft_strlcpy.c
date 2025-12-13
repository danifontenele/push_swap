/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 20:32:28 by calvares          #+#    #+#             */
/*   Updated: 2025/11/06 22:39:53 by calvares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief function that copy strings.
 * 
 * It is designed to be safer, more consistent, and less
 * error prone replacement for the strncpy. That's because
 * it takes the full size of the destination buffer and guarantee
 * a place to the NUL-termination if there is room.
 * 
 * @param dst Pointer to the destination buffer.
 * @param src Pointer to the string that will be copied to the 
 * buffer destination if all the requisites are ok.
 * @param dstsize size of buffer that will be considered for the
 * action of the function(copy string)
 * @return Returns the total length of the strings it tried to
 * create.
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	i;

	src_len = ft_strlen(src);
	if (dstsize == 0)
		return (src_len);
	i = 0;
	while (src[i] && i < (dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}

/* int	main(void)
{
	char s[] = "abcdefghij";
	char d[] = "123456";
	size_t retorno;

	retorno = ft_strlcpy(d, s, 7);
	
	printf("d: %s\n", d);
	printf("Retorno: %zu\n", retorno);
} */