/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai <casampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 17:37:23 by casampai          #+#    #+#             */
/*   Updated: 2026/06/17 01:29:51 by casampai         ###   ########.fr       */
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

void write_words(char **arr, char const *s, char c)
{
    size_t i;
    size_t j;
    size_t  current_word;
    i = 0;
    current_word = 0;
    while (s[i])
    {
        if (s[i] != c)
        {
            j = i;
            while(s[j] && s[j] != c)
               j++; 
            arr[current_word] = malloc((j - i) + 1);
            
        }
        else
            i++;
    }
    return ();
}

char **ft_split(char const *s, char c)
{
    size_t words;
    char **arr_str;

    words = count_words(s, c);
    arr_str = malloc(sizeof(char *) * (words + 1));

    if (!arr_str)
        return (NULL);
}