/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalhouda <kalhouda@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 16:45:34 by kalhouda          #+#    #+#             */
/*   Updated: 2026/11/08 15:45:49 by kalhouda         ###   ########.fr       */
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

void sa(t_stack_list *a, operations *stats)
{
	if (!a || (!(a)->head))
		return;
		stats->sa++;
		stats->total_op++;
	swap(a);
}

void sb(t_stack_list *b, operations *stats)
{
	if (!b || (!(b)->head))
		return;
	stats->sb++;
	stats->total_op++;
	swap(b);
}

void ss(t_stack_list *a, t_stack_list *b, operations *stats)
{
	sa(a, stats);
	sb(b, stats);
}