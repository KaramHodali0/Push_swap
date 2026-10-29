/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_node.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhatamle <mhatamle@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 09:23:03 by mhatamle          #+#    #+#             */
/*   Updated: 2026/10/29 09:23:05 by mhatamle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack *new_node(int value)
{
    t_stack *node;

    node = malloc(sizeof(t_stack));
    if (!node)
        return (NULL);
    node->value = value;
    node->prev = NULL;
    node->next = NULL;
    node->rank = 0;
    return (node);
}

void add_node_back(t_stack_list *stack, t_stack *node)
{
   if (stack->head == NULL)
   {
        stack->head = node;
        stack->tail = node;
        return;
   }
   else
   {
        stack->tail->next = node;
        node->prev = stack->tail;
        stack->tail = node;
   }
}
