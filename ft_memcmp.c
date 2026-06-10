/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai <casampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 15:34:52 by casampai          #+#    #+#             */
/*   Updated: 2026/06/09 16:35:16 by casampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *ptr1, const void *ptr2, size_t num)
{
    unsigned char    *ptr_p1;
    unsigned char    *ptr_p2;
    int               type_return;

    ptr_p1 =  ptr1;
    ptr_p2 =  ptr2;
    type_return = 0;
    
    if(num == 0)
        return (type_return);
    while(--num)
    {
        if (*ptr_p1 < *ptr_p2)
            type_return = -1;
        if(*ptr_p1 > *ptr_p2)
            type_return = 1;
        if(*ptr_p1 == *ptr_p2)
            type_return = 0;
        ptr_p1++;
        ptr_p2++;
    }

    return (type_return);
}