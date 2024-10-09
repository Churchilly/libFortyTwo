/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusudemi <yusudemi@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 21:06:14 by yusudemi          #+#    #+#             */
/*   Updated: 2024/10/08 19:56:30 by yusudemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*node_content;
	t_list	*node;

	if (!lst || !f)
		return (NULL);
	newlst = NULL;
	while (lst)
	{
		node_content = f(lst->content);
		node = ft_lstnew(node_content);
		if (!node)
		{
			ft_lstclear(&newlst, del);
			del(node_content);
			return (NULL);
		}
		ft_lstadd_back(&newlst, node);
		lst = lst->next;
	}
	return (newlst);
}
