/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai <casampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 17:37:23 by casampai          #+#    #+#             */
/*   Updated: 2026/06/22 18:21:12 by casampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_words(char *str, char c)
{
	size_t	words;
	int 	i;

	words = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != c && (i == 0 || str[i - 1] == c))
			words++;
		i++;
	}
	return (words);
}

static	char	**ft_free_all(char **arr, size_t words_created)
{
	size_t	i;

	i = 0;
	// Da free em cada palavra alocada até o momento da falha
	while (i < words_created)
	{
		free(arr[i]);
		i++;
	}
	// Dá free no array principal
	free(arr);
	return (NULL);
}

static char **write_words(char **arr, char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	current_word;
	size_t	index_word;

	i = 0;
	current_word = 0;
	index_word = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			j = i - 1;
			while (s[++j] && s[++j] != c)
			arr[current_word] = malloc((j - i) + 1);
			if (!arr[current_word])
				return (ft_free_all(arr, current_word));
			index_word = 0;
			while (i < j)
				arr[current_word][index_word++] = s[i++];
			arr[current_word][index_word] = '\0';
			current_word++;
		}
	}
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	size_t	words;
	char	**arr_str;

	if (!s)
		return (NULL);
	words = count_words((char *)s, c);
	arr_str = malloc(sizeof(char *) * (words + 1));
	if (!arr_str)
		return (NULL);
	if (!write_words(arr_str, s, c))
	{
		return (NULL);
	}
	return (arr_str);
}
