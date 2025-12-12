/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 15:18:44 by calvares          #+#    #+#             */
/*   Updated: 2025/10/23 15:49:53 by calvares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Save a copy of a string.
 * 
 * Returns a pointer to a new string which is a 
 * duplicate of the string s. Memory for the new string 
 * obtained with malloc, can be freed with free.
 * 
 * @return On succes, returns a pointer to the duplicated
 * string. Otherwise, it returns NULL if insufficient 
 * memory was avaliable.
 */
char	*ft_strdup(const char *s)
{
	char	*new_str;
	size_t	i;

	new_str = (char *)malloc(sizeof(*s) * (ft_strlen(s) + 1));
	if (!new_str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		new_str[i] = s[i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

/* int	main(void)
{
	char *str = "This is a string to be copied";
	char *dst;

	dst = ft_strdup(str);
	printf("After copied:\n%s\n", dst);
	free (dst);
} */