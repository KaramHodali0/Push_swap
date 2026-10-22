/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalhouda <kalhouda@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 16:45:34 by kalhouda          #+#    #+#             */
/*   Updated: 2026/10/22 17:00:23 by kalhouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack_list *stack)
{
	if (!stack || stack->head || head->next)
		return ;

	t_stack_list *next_current;
	t_stack_list *head;
	t_stack_list *after_nc;

	head = stack->head;
	next_current = head->next;
	after_nc = next_current->next;

	head->next = last;
	next_current->next = head;
	after_nc->next = NULL:
	next_current->prev = NULL;

}
