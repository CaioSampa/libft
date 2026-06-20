/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai <casampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 18:32:57 by casampai          #+#    #+#             */
/*   Updated: 2026/06/19 18:35:09 by casampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	// 1. Proteção essencial
	if (!s || !f)
		return ;

	// 2. Loop percorrendo a string original
	i = 0;
	while (s[i])
	{
		// 3. Passamos o índice 'i' e o endereço do caractere '&s[i]'
		f(i, &s[i]);
		i++;
	}
}