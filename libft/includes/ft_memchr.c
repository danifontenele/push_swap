/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 23:35:06 by calvares          #+#    #+#             */
/*   Updated: 2025/11/07 00:53:18 by calvares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Search the 1st byte equal to 'c' on the memory pointed for 's'.
 * 
 * This function examines the first 'n' bytes in the memory area
 * pointed for 's' looking for the value of 'c'(converted to unsigned char).
 * 
 * @param s Pointer to the area of the memory under analysis.
 * @param c Value to look for (interpeted as unsigned char).
 * @param n Max number of bytes under analysis.
 * @return Returns a pointer to the first byte the corresponds with 'c' 
 * or NULL if the byte was not found in the first 'n' bytes.
 */
void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	char	chr;
	size_t	i;

	str = (char *)s;
	chr = (char)c;
	i = 0;
	while (i != n)
	{
		if (str[i] == chr)
		{
			return (&str[i]);
		}
		i++;
	}
	return (NULL);
}

/*
int	main(void)
{
	char data[] = {'q', 'r', 's', 't', 'p', 'a', 'x'};

	char *pos = ft_memchr(data, 't', 7); //give a pointer to t's position

	if (pos == NULL)
	{
		printf("Character not found!\n");
	}
	else
	{
		printf("pos[0] = %c\n", pos[0]);
		printf("pos[1] = %c\n", pos[1]);
	}

	char *email = "calvares@student.42lisboa.com";
	char *domain = ft_memchr(email, '@', 30);
	domain++;
	printf("\nemail: %s\n", email);
	printf("domain: %s\n", domain);
	return (0);
}*/