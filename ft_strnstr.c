/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai <casampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 17:04:28 by casampai          #+#    #+#             */
/*   Updated: 2026/06/22 18:19:08 by casampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*ptr_big;
	char	*ptr_little;
	size_t	matched_len;

	ptr_big = (char *)big;
	ptr_little = (char *)little;
	matched_len = len;
	// if (*little == '\0')
	// 	return (ptr_big);
	// while (*ptr_big && len)
	// {
	// 	if ((*ptr_big == *ptr_little))
	// 	{
	// 		matched_len++;
	// 		ptr_little++;
	// 		if (*ptr_little == '\0')
	// 			return (ptr_big - (matched_len - 1));
	// 	}
	// 	else
	// 	{
	// 		if (matched_len > 0)
	// 		{
	// 			ptr_big = ptr_big - matched_len;
	// 			len = len + matched_len;
	// 			ptr_little = (char *)little;
	// 			matched_len = 0;
	// 		}
	// 	}
	// 	ptr_big++;
	// 	len--;
	// }
	return (NULL);
}
