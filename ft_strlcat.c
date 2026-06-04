/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai <casampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 15:22:05 by casampai          #+#    #+#             */
/*   Updated: 2026/06/04 15:47:52 by casampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t  strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t  len_count;

    len_count = 0;

    while(dstsize)
    {
        dst[dstsize - 1] = src[len_count];
        dstsize--;
        len_count++;
    }
}