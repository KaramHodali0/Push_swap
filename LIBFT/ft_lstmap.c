/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalhouda <kalhouda@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 13:34:37 by kalhouda          #+#    #+#             */
/*   Updated: 2026/09/28 13:50:18 by kalhouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newnode;
	t_list	*list;
	void	*fnew;

	list = NULL;
	while (lst)
	{
		fnew = f(lst->content);
		newnode = ft_lstnew(fnew);
		if (!newnode)
		{
			del(fnew);
			ft_lstclear(&list, del);
			return (NULL);
		}
		ft_lstadd_back(&list, newnode);
		lst = lst->next;
	}
	return (list);
}
