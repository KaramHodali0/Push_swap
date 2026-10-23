/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalhouda <kalhouda@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 10:40:45 by mhatamle          #+#    #+#             */
/*   Updated: 2026/10/24 00:47:56 by kalhouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdlib.h>
#include <unistd.h>

typedef struct s_stack
{
	int value;
	struct s_stack *next;
	struct s_stack *prev;
} t_stack;

typedef struct s_stack_list
{
	t_stack *tail;
	t_stack *head;
} t_stack_list;

void push(t_stack **src, t_stack **dst);
void swap(t_stack_list *stack);
void rotate(t_stack_list *stack);
void pb(t_stack **a, t_stack **b);
void ba(t_stack **a, t_stack **b);
void ra(t_stack **a);
void rb(t_stack **b);
void sa(t_stack **a);
void sb(t_stack **b);

#endif
