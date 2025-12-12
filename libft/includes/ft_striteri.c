/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 20:17:21 by calvares          #+#    #+#             */
/*   Updated: 2025/11/03 21:24:27 by calvares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Applies a function f to each character of the string s
 * passed as argument.
 * @param s String to apply the function throught.
 * @param f Function to apply. Its first argument represents 
 * the index of the string and the second argument represents 
 * the character itself.
 * 
 * The difference between ft_striteri and ft_strmapi is in the fact
 * this one opperates the string s straightly, with no need of a 
 * new string and also that's why this one doesn't return another 
 * string.
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}

/* void to_upper(unsigned int i, char *c);
void replace_spaces(unsigned int i, char *c);

int main(void)
{
	char s1[] = "HeY YoU, WaTcH THis!";
	char s2[] = "This is a test for spaces    ";

	printf("Original:\n%s\n", s1);
	ft_striteri(s1, to_upper);
	printf("test/to_upper:\n%s\n", s1);
	
	printf("Original:\n%s\n", s2);
	ft_striteri(s2, replace_spaces);
	printf("test/replace_spaces:\n%s\n", s2);
	
}

void to_upper(unsigned int i, char *c)
{
	(void)i;
	if (*c >= 'a' && *c <= 'z')
		*c -= 32;
}

void replace_spaces(unsigned int i, char *c)
{
	(void)i;
	if (*c == ' ')
		*c = '_';
} */
