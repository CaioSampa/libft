/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai <casampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 15:22:05 by casampai          #+#    #+#             */
/*   Updated: 2026/06/06 16:37:24 by casampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
	char		*ptr_dst;
	const	char		*ptr_src;
	
	ptr_dst = dst;
	ptr_src = src;
	
	if(size == 0)
		return (ft_strlen(dst) + ft_strlen((char *)ptr_src));
	
	while (*ptr_dst)
		ptr_dst++;
	while (*ptr_src && (size - ft_strlen(dst) - 1))
		*ptr_dst++ = *ptr_src++;

	if(size > 0)
		ptr_dst[ft_strlen(ptr_dst) + 1] = '\0';

	return (ft_strlen(dst) + ft_strlen((char *)ptr_src));
}