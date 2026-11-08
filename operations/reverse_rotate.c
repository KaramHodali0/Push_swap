/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalhouda <kalhouda@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 00:18:07 by kalhouda          #+#    #+#             */
/*   Updated: 2026/11/08 15:35:12 by kalhouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void reverse_rotate(t_stack_list *stack)
{
    t_stack *head;
    t_stack *last;
    t_stack *before_last;

    if (!stack || !stack->head || !stack->head->next || !stack->tail)
        return;

    head = stack->head;
    last = stack->tail;
    before_last = last->prev;

    last->next = head;
    last->prev = NULL;
    head->prev = last;
    before_last->next = NULL;
    stack->head = last;
    stack->tail = before_last;
}

void rra(t_stack_list *a, operations *stats)
{
    stats->rra++;
    stats->total_op++;
    reverse_rotate(a);
}

void rrb(t_stack_list *b, operations *stats)
{
    stats->rrb++;
    stats->total_op++;
    reverse_rotate(b);
}

void rrr(t_stack_list *a, t_stack_list *b, operations *stats)
{
    rra(a, stats);
    rrb(b, stats);
}