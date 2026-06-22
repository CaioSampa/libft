/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai <casampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 17:52:30 by casampai          #+#    #+#             */
/*   Updated: 2026/06/21 07:38:29 by casampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*str;

	if (!s || !f)
		return (NULL);

	len = ft_strlen((char *)s);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);

	i = 0;
	while (s[i])
	{

		str[i] = f(i, s[i]);
		i++;
	}

	str[i] = '\0';
	return (str);
}
