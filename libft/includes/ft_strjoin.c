/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 15:54:17 by calvares          #+#    #+#             */
/*   Updated: 2025/10/23 18:15:57 by calvares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief concatenates s1 and s2
 * 
 * Allocates memory and returns a new string, which
 * is the result of concatenating s1 and s2
 * 
 * @param s1 The prefix string
 * @param s2 The suffic string
 * @return The new string or NULL if the allocation fails.
 */
char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*new_str;
	size_t	sum_length;

	if (!s1 || !s2)
		return (NULL);
	sum_length = ft_strlen(s1) + ft_strlen(s2);
	new_str = malloc((sizeof(char) * sum_length) + 1);
	if (!new_str)
		return (NULL);
	ft_strlcpy(new_str, s1, sum_length + 1);
	ft_strlcat(new_str, s2, sum_length + 1);
	return (new_str);
}

/* int	main(void)
{
	char *s1 = "ola, ";
	char *s2 = "mundo!";
	char *result;
	
	result = ft_strjoin(s1, s2);
	if(result)
	{
		printf("%s\n", result);
		free(result);
	}
	else
		printf("Erro na alocacao\n");
	return (0);
} */