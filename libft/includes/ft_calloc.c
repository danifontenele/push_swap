/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 01:22:04 by calvares          #+#    #+#             */
/*   Updated: 2025/11/07 01:13:30 by calvares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief The calloc function allocates memory.
 * 
 * The allocated memory is aligned such that it 
 * can be used for any data type.
 *
 * The calloc function contigously allocates enought
 * space for nmemb objects that are size bytes of memory
 * and returns a pointer to the allocated memory.
 * 
 * The allocated memory is filled with bytes with value zero.
 * @param nmemb quantity of bytes needed in the specific case.
 * @param size size of the type.
 * @return If successful, calloc() returns a pointer to the 
 * allocated memory. If there's an error, they return a NULL
 * pointer and set errno to ENOMEN.
 */
void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*ptr;
	size_t			i;

	if (size == 0 || nmemb == 0)
		return (malloc(0));
	if (size != 0 && nmemb > SIZE_MAX / size)
		return (NULL);
	ptr = (void *)malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < nmemb * size)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}

/* int	main(void)
{
	int *arr;
	size_t n = 10;
	size_t i; 

	arr = ft_calloc(n, sizeof(int));
	if (!arr)
		return (printf("Falha na alocacao\n"));
	i = 0;
	while (i < 10)
	{
		printf("arr[%zu]: %d\n", i, arr[i]);
		i++;
	}
	free (arr);
	return (0);
} */