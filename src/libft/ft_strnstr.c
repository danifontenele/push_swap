/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 21:44:53 by calvares          #+#    #+#             */
/*   Updated: 2025/11/04 21:44:10 by calvares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Locates the 1st occurence of a string in another bigger string.
 * 
 * ft_strnstr() just search the small string until len characters of the
 * bigger string and no more than that.
 * 
 * @return NULL if there's no small in big, big if small is NULL,
 * pointer to the first character of first occurence of small.
 */
char	*ft_strnstr(const char *big, const char *small, size_t len)
{
	size_t	i;
	size_t	j;

	if (small[0] == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while (small[j] && big[i + j] == small[j] && i + j < len)
			j++;
		if (small[j] == '\0')
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}

/* int	main(void)
{
	char big[] = "This is the way.";
	char small[] = "the";

	char *the = ft_strnstr(big, small, 11);

	printf("the: %s\n", the);
	char *to_find = ft_strnstr("hello", "lo", 2);
	printf("%s\n", to_find);
} */