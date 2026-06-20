/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai <casampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/20 15:13:55 by casampai          #+#    #+#             */
/*   Updated: 2026/06/20 18:08:53 by casampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*next_node;
	t_list	*current_node;

	current_node = *lst;
	while (current_node->next)
	{
		next_node = current_node->next;
		del(current_node->content);
		free(current_node);
		current_node = next_node;
	}
}
