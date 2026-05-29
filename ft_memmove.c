/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai <casampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 13:32:37 by casampai          #+#    #+#             */
/*   Updated: 2026/05/29 15:03:54 by casampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dest, void *src, size_t n)
{
	char	*ptr_dest;
	char	*ptr_src;

	ptr_dest = dest;
	ptr_src = src;
	if (dest <= src)
	{
		while (n--)
			*ptr_dest++ = *ptr_src;
	}
	else
	{
		ptr_dest = n - 1;
		ptr_src = n - 1;
		while (n--)
			*ptr_dest++ = *ptr_src;
	}
}
