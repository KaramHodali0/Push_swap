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

void    sort_chunks(t_stack_list *a, t_stack_list *b, int *rank)
{
    int root;
    int len;
    int start;
    int end;
    t_stack *node;

    len = size(a->head);
    root = get_chunk_size(len);
    start = 0;
    end = root - 1;
    node = a->head;
}
