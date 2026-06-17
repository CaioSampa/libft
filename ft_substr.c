/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai <casampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 15:32:57 by casampai          #+#    #+#             */
/*   Updated: 2026/06/17 00:09:09 by casampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t i;
    char *substr;
    size_t s_len;

    if (!s)
        return (NULL);

    s_len = ft_strlen((char *) s);
    i = 0;
    if (start > s_len)
    {
        substr = malloc(sizeof(char));
        if (substr == NULL)
            return (NULL);
    }
    else
    {
        if (len > s_len - start)
            len = s_len - start;
        substr = malloc((len + 1) * sizeof(char));
        if (substr == NULL)
            return (NULL);
        while (s[start] && i < len)
            substr[i++] = s[start++];
    }
    substr[i] = '\0';

    return (substr);
}