/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai <casampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 21:55:10 by casampai          #+#    #+#             */
/*   Updated: 2026/06/20 14:48:31 by casampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int 	size;
	t_list	*current_node;

	size = 0;
	current_node = lst;
	while (current_node->next)
	{
		size++;
		current_node = current_node->next;
	}
	return (size);
}
