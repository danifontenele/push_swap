/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 20:07:18 by calvares          #+#    #+#             */
/*   Updated: 2025/11/07 00:56:36 by calvares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Copies 'len' bytes of memory from 'src' to 'dst'
 * 
 * This function considers that 'src' and 'dst' can be in the same range 
 * in the memory and protects in case of overlap(when dst is right after).
 */
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*t_src;
	char	*t_dst;

	if (!src && !dst)
		return (NULL);
	t_src = (char *)src;
	t_dst = (char *)dst;
	if (t_dst > t_src)
	{
		while (len--)
		{
			t_dst[len] = t_src[len];
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			t_dst[i] = t_src[i];
			i++;
		}
	}
	return (dst);
}

/* 
int	main(void)
{
	int	source[10] = {1,2,3,4,5,6,7,8,9,10};
	int	destination[10];
	int len = 10;
	int i;
	// Caso esteja tudo certo -> retorna o elemento de cada index.
	ft_memmove(destination, source, len * sizeof(int));
	i = 0;
	while (i < len)
	{
		printf("destination[%d]=%d\n", i, destination[i]);
		i++;
	}
	// Caso ambos sejam NULL
	printf("\nCaso !dst E !src:\n");
	printf("	dest: %p\n", (char *)ft_memmove(NULL, NULL, len * sizeof(int)));
	
	// Caso src OU dst seja NULL
	ft_memmove(NULL, source, len * sizeof(int));
	ft_memmove(destination, NULL, len * sizeof(int));
	return (0);
} */