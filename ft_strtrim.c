/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai <casampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 17:11:04 by casampai          #+#    #+#             */
/*   Updated: 2026/06/16 17:02:30 by casampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>


char *ft_strtrim(char const *s1, char const *set)
{
    // ler s1 -> identificar os caracteres de set -> criar str por malloc e escrever sem os caractres
    // usar strchr para identificar os caracteres
    char *str_new;

    if (!s1)
        return (NULL);

    str_new = malloc((ft_strlen((char *)s1) - get_count_remove((char *)s1, (char *)set)) + 1);
    if (!str_new)
        return (NULL);
    write_clean_str((char *)str_new, (char*) s1, (char*)set);

    return(str_new);
}

int main(void)
{
    char    *str = "o!p@a3 beleza.";
    char    *set = "3@! ";
    char    *str_clean;
    str_clean = ft_strtrim(str, set);
    printf("opa %s", str_clean);
    free(str_clean);
    return (0);
}