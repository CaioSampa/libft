/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai <casampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 13:32:33 by casampai          #+#    #+#             */
/*   Updated: 2026/05/29 13:49:23 by casampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, void *src, int count)
{
	char	*d;
	char	*s;

	d = dest;
	s = src;
	while (count--)
		*d++ = *s++;
	return (dest);
}