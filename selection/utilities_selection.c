/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities_selection.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalhouda <kalhouda@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 13:20:35 by kalhouda          #+#    #+#             */
/*   Updated: 2026/11/13 19:19:16 by kalhouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack *find_min(t_stack *stack)
{
    t_stack *min;

    min = stack;
    while (stack)
    {
        if (stack->value < min->value)
            min = stack;
        stack = stack->next;
    }
    return (min);
}

int find_position(t_stack *stack, t_stack *target)
{
    int i;

    i = 0;
    while (stack)
    {
        if (stack == target)
            return (i);
        i++;
        stack = stack->next;
    }
    return (-1);
}

int stack_size(t_stack *stack)
{
    int counter;

    counter = 0;
    while (stack)
    {
        counter++;
        stack = stack->next;
    }
    return (counter);
}
// if ra_count > rra_count
//(i use the less ones for the less numbers of ops)
void rotate_min_to_top(t_stack_list *a, operations *stats)
{
    int ra_count;
    int rra_count;
    int position_min;

    position_min = find_position(a->head, find_min(a->head));
    ra_count = position_min;
    rra_count = (stack_size(a->head)) - position_min;
    if (ra_count <= rra_count)
    {
        while (ra_count > 0)
        {
            ra(a, stats);
            ra_count--;
        }
    }
    else
    {
        while (rra_count > 0)
        {
            rra(a, stats);
            rra_count--;
        }
    }
}

void simple_sort(t_stack_list *a, t_stack_list *b, operations *stats)
{
    while (a->head)
    {
        rotate_min_to_top(a, stats);
        pb(a, b, stats);
    }
    while (b->head)
    {
        pa(a, b, stats);
    }
}