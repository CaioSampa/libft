/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai <casampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 17:37:23 by casampai          #+#    #+#             */
/*   Updated: 2026/06/18 18:23:52 by casampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t count_words(char *str, char c)
{
	size_t words;
	int i;

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

static char **ft_free_all(char **arr, size_t words_created)
{
	size_t i;

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
	size_t i;
	size_t j;
	size_t current_word;
	size_t index_word;

	i = 0;
	current_word = 0;
	index_word = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			j = i;
			while (s[j] && s[j] != c)
				j++;
			arr[current_word] = malloc((j - i) + 1);
			if (!arr[current_word])
				return (ft_free_all(arr, current_word));
			index_word = 0;
			while (i < j)
				arr[current_word][index_word++] = s[i++];
			arr[current_word][index_word] = '\0';
			current_word++;
		}
		else
			i++;
	}
	arr[current_word] = NULL;
	return (arr);
}

char **ft_split(char const *s, char c)
{
    size_t words;
    char **arr_str;

    // 1. PROTEÇÃO CONTRA NULL: Se a string não existir, para tudo.
    if (!s)
        return (NULL);

    // 2. CONTAGEM SEGURA: Se a string for "", count_words deve retornar 0.
    words = count_words((char *)s, c);
    
    // Aloca o array principal
    arr_str = malloc(sizeof(char *) * (words + 1));
    if (!arr_str)
        return (NULL);

    // 3. SEGURANÇA DE ESCRITA: Se write_words falhar internamente (falta de memória),
    // ela mesma limpa tudo usando a static ft_free_all e nos retorna NULL.
    if (!write_words(arr_str, s, c))
    {
        // Se sua write_words já der o free_all lá dentro, 
        // aqui basta retornar NULL para indicar a falha geral.
        return (NULL); 
    }

    return (arr_str);
}