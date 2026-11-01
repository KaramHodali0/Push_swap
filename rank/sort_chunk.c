/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_chunk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhatamle <mhatamle@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 10:38:52 by mhatamle          #+#    #+#             */
/*   Updated: 2026/10/29 10:38:54 by mhatamle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void    push_chunk(t_stack_list *a, t_stack_list *b, int start , int end)
{
    int i;
    int len;
    t_stack *node;

    len = size(a->head);
    i = 0;
    while (i < len)
    {
        node = a->head;
        if (node->rank >= start && node->rank <= end)
            pb(a,b);
        else
            ra(a);
        i++;
    }
}

void    sort_chunks(t_stack_list *a, t_stack_list *b)
{
    int root;
    int start;
    int end;
    int total_len;

    total_len = size(a->head);
    root = get_chunk_size(total_len);
    start = 0;
    end = root - 1;
    while (start < total_len)
    {
        push_chunk(a, b, start, end);  
        start = end + 1;
        end = end + root;
    }
}

int   find_max_rank(t_stack *b)
{
    int max_rank;
    t_stack *node;

    if(!b)
        return (-1);
    max_rank = b->rank;
    node = b->next;
    while (node)
    {
        if (node->rank > max_rank)
            max_rank = node->rank;
        node = node->next;
    }
    return (max_rank);
}

int find_max_position(t_stack *b)
{
    int max_rank;
    int max_pos;
    t_stack *node;
    int i;

    if (!b)
        return (-1);
    max_rank = b->rank;
    max_pos = 0;
    node = b->next;
    i = 1;
    while (node)
    {
        if (node->rank > max_rank)
        {
            max_rank = node->rank;
            max_pos = i;
        }
        node = node->next;
        i++;
    }
    return (max_pos);
}