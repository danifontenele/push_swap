/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 21:49:52 by calvares          #+#    #+#             */
/*   Updated: 2025/11/03 23:18:32 by calvares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief The ft_strchr() locates the first occurence 
 * of char 'c' in the string pointed by s.
 * 
 * @return Return a pointer to the located character,
 * creating a kind of substring, or NULL if the 
 * character does not appear in the string.
 */
char	*ft_strchr(const char *s, int c)
{
	size_t		i;
	char		*str;
	char		chr;

	str = (char *)s;
	chr = (char)c;
	i = 0;
	while (str[i])
	{
		if (str[i] == chr)
			return (&str[i]);
		i++;
	}
	if (chr == '\0')
		return (&str[i]);
	return (NULL);
}

/*
int main(void)
{
	char tweet[] = "This is my @mention";

	char *mention = ft_strchr(tweet, '@');
	printf("%s\n", mention);
	
	printf("\nmemory address:\n");
	printf("%p\n", mention);
	printf("%p\n", tweet + 11);
	return (0);
}*/