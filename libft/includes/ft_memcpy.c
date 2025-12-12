/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 20:07:02 by calvares          #+#    #+#             */
/*   Updated: 2025/11/07 00:58:46 by calvares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Copies 'n' bytes from the block of memory 'src' to 'dst'.
 * 
 */
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (src == NULL && dst == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		((char *)dst)[i] = ((char *)src)[i];
		i++;
	}
	return (dst);
}

/* int	main(void)
{
	char s[] = "abcdefghijklmnopqrstuvwxyz";
	char d[27];

	// Se dst e s != NULL e estiver tudo certo -> retorna o bloco de memoria
	ft_memcpy(d, s, 10);
	d[10] = '\0';
	printf("1) Se destino for valido:\n	destino: %s\n", d);
	
	// Dst e src recebem NULL -> deve retornar NULL
	ft_memcpy(NULL, NULL, 10);
	printf("2) Se dst e src forem NULL:\n	return: %p\n");
	
	// Destino recebe NULL -> deve dar segfault.
	ft_memcpy(NULL, s, 10);
	
	// Src recebe NULL -> deve dar segfault.
	ft_memcpy(d, NULL, 10);
} */