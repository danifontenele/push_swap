/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 19:46:03 by calvares          #+#    #+#             */
/*   Updated: 2025/11/08 19:25:20 by calvares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Applies a function to each character of string s.
 * 
 * @param s String to apply the function throught.
 * @param f Function to apply. Its first argument represents 
 * the index of the string and the second argument represents 
 * the character itself.
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*new_str;

	new_str = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!new_str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		new_str[i] = (*f)(i, s[i]);
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

/* char	ft_toupperchar(unsigned int index, char c)
{
	(void)index;
	return ((char)ft_toupper(c));
}

int	main(void)
{
	char 	*s1 = "abcdef";
	char	*s2 = ft_strmapi(s1, ft_toupperchar);

	printf("string s1: %s\n", s1);
	printf("string s2: %s\n", s2);
} */