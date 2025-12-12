/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 00:30:46 by calvares          #+#    #+#             */
/*   Updated: 2025/11/08 19:11:10 by calvares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Compare byte string
 *
 * Function compares byte string s1 against byte string s2.
 * Both strings are assumed to be n bytes long.
 *
 * @param s1 String to be compared to
 * @param s2 String to compares to
 * @param n Limit of bytes to be compared
 * @return Returns zero if the two strings are identical,
 * otherwise, returns the difference between the 1st two
 * differing bytes treated as unsigned char values.
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ts1;
	unsigned char	*ts2;

	ts1 = (unsigned char *)s1;
	ts2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (ts1[i] != ts2[i])
			return (ts1[i] - ts2[i]);
		i++;
	}
	return (0);
}

/* int main()
{
	char str[2];
	str[0] = 255;
	str[1] = 0;
	printf("%d\n", ft_memcmp(str, str+1, 1));
	return 0;
} */
