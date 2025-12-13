/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 23:44:08 by calvares          #+#    #+#             */
/*   Updated: 2025/11/08 19:42:45 by calvares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief This function returns a pointer to the last occurrence of 
 * the character c in the string s.
 * 
 * @return A pointer to the matched character or NULL if the character
 * is not found. The '\0' character is considered, so if c is '\0'
 * the funcion returns a pointer to the terminator.
 */
char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*str;
	char	chr;
	char	*last;

	str = (char *)s;
	chr = (char)c;
	last = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] == chr)
			last = &str[i];
		i++;
	}
	if (chr == '\0')
		return (&str[i]);
	return (last);
}

/* int main(void)
{
	char *str = "Find the last occurence of some char in this string\n";
	char s = 's';
	char z = 'z';
	
	printf("Case 1: If that char is in the string:\n");
	printf("From that char to the end: %s\n", ft_strrchr(str, s));
	printf("Case 2: If the char is not in the string:\n");
	printf("Return: %p\n", ft_strrchr(str, z));
} */
