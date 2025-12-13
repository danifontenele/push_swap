/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calvares <calvares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 17:16:22 by calvares          #+#    #+#             */
/*   Updated: 2025/11/06 21:24:34 by calvares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	word_count(const char *s, char sep)
{
	size_t	wcounter;
	size_t	i;

	wcounter = 0;
	i = 0;
	while (s[i])
	{
		if ((s[i] != sep && (s[i + 1] == sep || s[i + 1] == '\0')))
			wcounter++;
		i++;
	}
	return (wcounter);
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
	free(substr);
	return (NULL);
}

static char	**ft_split_util(const char *s, char sep, char **subs)
{
	size_t	i;
	size_t	start;
	size_t	j;

	start = 0;
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != sep)
		{
			start = i;
			while (s[i] != sep && s[i] != '\0')
				i++;
			subs[j] = ft_substr(s, start, (i - start));
			if (!subs[j])
				return (free_all(subs, j));
			j++;
		}
		else
			i++;
	}
	subs[j] = NULL;
	return (subs);
}

char	**ft_split(const char *s, char sep)
{
	char	**result;

	if (!s)
		return (NULL);
	result = malloc(sizeof(char *) * (word_count(s, sep) + 1));
	if (!result)
		return (NULL);
	result = ft_split_util(s, sep, result);
	return (result);
}

/* int	main(int ac, char **av)
{
	char	**splitted;
	char	sep = (char) * av[2];
	char	*str = av[1];

	splitted = ft_split(str, sep);
	int	i = 0;
	while (i < word_count(str, sep))
	{
		printf("%s\n", splitted[i]);
		i++;
	}
	printf("number of words: %lu\n", word_count(str, sep));
	free (splitted);
	return (0);
} */