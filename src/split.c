/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 19:09:54 by calvares          #+#    #+#             */
/*   Updated: 2025/12/14 22:02:36 by calvares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static size_t	word_counter(char *str, char sep)
{
	size_t	counter;
	size_t	i;

	counter = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != sep && (str[i + 1] == sep || str[i + 1] == '\0'))
			counter++;
		i++;
	}
	return (counter);
}

static void	*free_all(char **substr, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		free(substr[i]);
		i++;
	}
	free (substr);
	return (NULL);
}

static char	**split_util(const char *s, char sep, char **subs)
{
	size_t	i;
	size_t	n;
	size_t	start;

	i = 0;
	n = 0;
	start = 0;

	while (s[i])
	{
		if (s[i] !=  sep)
		{
			start = i;
			while (s[i] != sep && s[i] != '\0')
				i++;
			subs[n] = ft_substr(s, start, (i - start));
			if (!subs[n])
				 return (free_all(subs, n));
			n++;
		}
		else
			i++;
	}
	subs[n] = NULL;
	return (subs);
}

char	**split(char *str, char sep)
{
	char	**result;

	if (!str)
		return (NULL);
	result = malloc((word_counter(str, sep) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	result = split_util(str, sep, result);
	return (result);
}
