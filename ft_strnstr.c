/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai <casampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 17:04:28 by casampai          #+#    #+#             */
/*   Updated: 2026/06/12 18:23:55 by casampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    char *ptr_big;
    char *ptr_little;
    size_t matched_len;

    ptr_big = (char *)big;
    ptr_little = (char *)little;
    matched_len = 0;
    if (*little == '\0')
        return (ptr_big);
    while (*ptr_big && len)
    {
        if ((*ptr_big == *ptr_little))
        {
            matched_len++;
            ptr_little++;
            if (*ptr_little == '\0')
                return (ptr_big - (matched_len - 1));
        }
        else
        {
            if (matched_len > 0)
            {
                // O SEGREDO DO LOOP ÚNICO: Se falhar no meio do match,
                // precisamos recuar o ptr_big para a posição logo após onde o match começou.
                ptr_big = ptr_big - matched_len;
                len = len + matched_len; // Devolvemos os caracteres "gastos" para o len

                ptr_little = (char *)little; // Reseta a agulha
                matched_len = 0;             // Zera o contador de match
            }
        }
        ptr_big++;
        len--;
    }
    return (NULL);
}
