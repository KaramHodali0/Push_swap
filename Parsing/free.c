/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhatamle <mhatamle@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 08:44:37 by mhatamle          #+#    #+#             */
/*   Updated: 2026/11/04 08:44:38 by mhatamle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void free_stack(t_stack_list *stack)
{
    t_stack *current;
    t_stack *next;

    if (!stack)
        return;
    current = stack->head;
    while (current)
    {
        next = current->next;
        free(current);
        current = next;
    }
    stack->head = NULL;
    stack->tail = NULL;
}
