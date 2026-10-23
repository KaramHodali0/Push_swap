/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalhouda <kalhouda@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 15:09:25 by mhatamle          #+#    #+#             */
/*   Updated: 2026/10/23 22:01:35 by kalhouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void rotate(t_stack_list *stack)
{
	t_stack *last;
	t_stack *tmp;
	t_stack *first_next;

	if (!stack || !stack->head || !stack->head->next || !stack->tail)
		return;
	last = stack->tail;
	tmp = stack->head;
	first_next = tmp->next;
	last->next = tmp;
	tmp->prev = last;
	tmp->next = NULL;
	first_next->prev = NULL;
	stack->head = first_next;
	stack->tail = tmp;
}

void ra(t_stack_list *a)
{
	if (!a || !(a)->head)
		return;
	rotate(a);
}

void rb(t_stack_list *b)
{
	if (!b || !(b)->head)
		return;
	rotate(b);
}

void rr(t_stack_list *a, t_stack_list *b)
{
	ra(a);
	rb(b);
}