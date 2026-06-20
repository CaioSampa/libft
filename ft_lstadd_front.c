/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai <casampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 20:49:13 by casampai          #+#    #+#             */
/*   Updated: 2026/06/19 21:12:28 by casampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	// Se o ponteiro da lista ou o novo nó não existirem, para aqui
	if (!lst || !new)
		return ;

	// 1. O novo nó aponta para o atual primeiro elemento da lista
	new->next = *lst;

	// 2. A cabeça da lista passa a apontar para o novo nó
	*lst = new;
}