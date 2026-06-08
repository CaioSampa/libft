/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai <casampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 13:43:54 by casampai          #+#    #+#             */
/*   Updated: 2026/06/06 15:31:12 by casampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
    int i;
    int len_src;
    
    i = 0;
    len_src = 0;

    while (src[len_src])
        len_src++;
    
    if (size == 0)
        return (len_src);
    
	while (src[i] && size - 1)
    {
        dst[i] = src[i];
        i++;
        size--;
    }

    if (size > 0)
        dst[i] = '\0';

    return (len_src);
}