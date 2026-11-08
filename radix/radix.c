/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhatamle <mhatamle@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 14:12:35 by mhatamle          #+#    #+#             */
/*   Updated: 2026/11/08 15:03:45 by mhatamle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int get_max_bits(t_stack *a)
{
    int max_rank;
    int max_bits;
    
    max_rank = find_max_rank(a);
    if(max_rank == -1)
        return (0);
    max_bits = 0;
    while ((max_rank >> max_bits) != 0)
        max_bits++;
    return (max_bits);
}

void radix_sort(t_stack_list *a, t_stack_list *b)
{
    int max_bits;
    int bit;
    int len;
    int i;

    max_bits = get_max_bits(a->head);
    bit = 0;
    while (bit < max_bits)
    {
        len = size(a->head);
        i = 0;
        while(i < len)
        {
            if ((a->head->rank >> bit) & 1)
                ra(a);
            else
                pb(a, b);
            i++;
        }
        while (b->head)
            pa(a,b);
        bit++;
    }
}
