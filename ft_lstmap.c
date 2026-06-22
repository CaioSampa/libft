/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai <casampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/20 18:13:00 by casampai          #+#    #+#             */
/*   Updated: 2026/06/21 07:42:57 by casampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*new_content;

	// 1. Proteção inicial padrão
	if (!lst || !f || !del)
		return (NULL);
		
	new_list = NULL;
	// 2. Loop para percorrer toda a lista original
	while (lst)
	{
		// Aplica a função f no conteúdo do nó atual
		new_content = f(lst->content);
		
		// Cria um novo nó com o conteúdo transformado
		new_node = ft_lstnew(new_content);
		
		// 3. Se o malloc do nó falhar, limpa toda a nova lista e o conteúdo atual
		if (!new_node)
		{
			del(new_content); // Limpa o conteúdo que acabou de ser gerado por f
			ft_lstclear(&new_list, del); // Limpa todos os nós já adicionados na lista nova
			return (NULL);
		}
		
		// 4. Adiciona o nó criado no final da nova lista
		ft_lstadd_back(&new_list, new_node);
		
		// Avança para o próximo nó da lista antiga
		lst = lst->next;
	}
	return (new_list);
}
