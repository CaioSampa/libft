/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai <casampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 13:43:54 by casampai          #+#    #+#             */
/*   Updated: 2026/06/04 15:20:44 by casampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <bsd/string.h>
#include <stdio.h>

size_t	ft_strlcpy(char *d, const char *s, size_t n)
{
	int		i;
	size_t	s_len; // para retornar o len de s

	s_len = 0;
	i = 0;

	while (s[s_len])
		s_len++;

	if (n == 0) // verificar se n vazio
		return (s_len);

	while ((s[i]) && n - 1) // se s existe na posicao do contador e n existe - 1 para sobrar 1 no final para o null terminator
	{
		d[i] = s[i];
		i++;
		n--;
	}
	if (n >= 0) // colocar o null terminator no fim da str
		d[i] = '\0';

	return (s_len); // retorno 
}