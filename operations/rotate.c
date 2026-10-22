/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhatamle <mhatamle@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 15:09:25 by mhatamle          #+#    #+#             */
/*   Updated: 2026/10/22 16:11:24 by mhatamle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_stack_list *stack)
{
	t_stack	*last;
	t_stack	*tmp;
	t_stack	*first_next;

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
