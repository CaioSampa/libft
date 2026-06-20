/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai <casampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 17:52:30 by casampai          #+#    #+#             */
/*   Updated: 2026/06/19 18:30:21 by casampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*str;

	// 1. Proteções
	if (!s || !f)
		return (NULL);

	// 2. Alocação (use sua ft_strlen)
	len = ft_strlen(s);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);

	// 3. Loop de mapeamento
	i = 0;
	while (s[i])
	{
		// Aqui chamamos 'f' passando o índice 'i' e o caractere 's[i]'
		str[i] = f(i, s[i]);
		i++;
	}
	
	// 4. Fechando a nova string
	str[i] = '\0';
	return (str);
}