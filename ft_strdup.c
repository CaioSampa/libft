/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai <casampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 15:03:29 by casampai          #+#    #+#             */
/*   Updated: 2026/06/15 15:20:11 by casampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s)
{
    size_t s_len = ft_strlen(s) + 1;
    char    *ptr_str = malloc(s_len * sizeof(char));
    
    if(!ptr_str)
        return (NULL);
    ft_strlcpy(ptr_str, s, s_len);
    return (ptr_str);
}
