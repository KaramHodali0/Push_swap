/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalhouda <kalhouda@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 11:33:49 by kalhouda          #+#    #+#             */
/*   Updated: 2026/09/24 13:14:35 by kalhouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tem;
	t_list	*n;

	if (!lst || !*lst)
		return ;
	tem = *lst;
	while (tem)
	{
		n = tem->next;
		del(tem->content);
		free(tem);
		tem = n;
	}
	*lst = NULL;
}
