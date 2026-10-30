/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalhouda <kalhouda@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 22:02:36 by kalhouda          #+#    #+#             */
/*   Updated: 2026/10/23 22:02:36 by kalhouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void push(t_stack **src, t_stack **dst)
{
    t_stack *tmp;

    if (!src || !*src)
        return;
    tmp = *src;
    *src = tmp->next;
    if (*src)
        (*src)->prev = NULL;
    tmp->next = *dst;
    if (*dst)
        (*dst)->prev = tmp;
    tmp->prev = NULL;
    *dst = tmp;
}

void pb(t_stack **a, t_stack **b)
{
    push(a, b);
}

void pa(t_stack **a, t_stack **b)
{
    push(b, a);
}
