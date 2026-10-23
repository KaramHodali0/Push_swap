/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalhouda <kalhouda@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 16:45:34 by kalhouda          #+#    #+#             */
/*   Updated: 2026/10/23 21:54:16 by kalhouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void swap(t_stack_list *stack)
{
	if (!stack || !stack->head || !stack->head->next)
		return;

	t_stack *next_current;
	t_stack *head;
	t_stack *last;

	head = stack->head;
	next_current = head->next;
	last = next_current->next;

	next_current->next = head;
	next_current->prev = NULL;
	head->prev = next_current;
	head->next = last;
	if (last)
		last->prev = head;
	else
		stack->tail = head;
	stack->head = next_current;
}

void sa(t_stack_list *a)
{
	if (!a || (!(a)->head))
		return;
	swap(a);
}

void sb(t_stack_list *b)
{
	if (!b || (!(b)->head))
		return;
	swap(b);
}

void ss(t_stack_list *a, t_stack_list *b)
{
	sa(a);
	sb(b);
}