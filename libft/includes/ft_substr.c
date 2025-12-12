/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 15:52:21 by calvasub          #+#    #+#             */
/*   Updated: 2025/11/06 21:37:02 by calvares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Extract a substring from a string.
 * 
 * Allocate memory and returns a substring 's'.
 * The substring starts at index 'start' and has
 * a maximum length of 'len'.
 * 
 * @param s The original string from which to create
 * the substring.
 * @param start The starting index of the substring
 * whithin 's'.
 * @param len The maximum length of the substring.
 * @return The substring or NULL if the allocation fails.
 */
char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	i = 0;
	while (s[start] && i < len)
	{
		sub[i] = s[start];
		i++;
		start++;
	}
	sub[i] = '\0';
	return (sub);
}

/* int main(void)
{
	char			*str = "just take a substring from this string, please!";
	unsigned int 	start = 12;
	size_t			len = 9; 
	char			*result;
	//size_t and unsigned int has the same range if in a 32 bits
	result = ft_substr(str, start, len);
	printf("Result: %s\n", result);
} */