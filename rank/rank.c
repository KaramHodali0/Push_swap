/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rank.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhatamle <mhatamle@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 09:22:41 by mhatamle          #+#    #+#             */
/*   Updated: 2026/10/29 09:22:45 by mhatamle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

int *get_copy(t_stack *stack)
{
    int len;
    int i;
    int *rank;

    len = size(stack);
    if (len == 0)
        return (NULL);
    rank = malloc(sizeof(int) * len);
    if (!rank)
        return (NULL);
    i = 0;
    while (stack)
    {
        rank[i] = stack->value;
        stack = stack->next;
        i++;
    }
    return (rank);
}

void    check_sorted(int *arr, int *rank, int len)
{
    int i;
    int j;
    int count;

    i = 0;
    while (i < len)
    {
        j = 0;
        count = 0;
        while (j < len)
        {
            if (arr[i] > arr[j])
                count++;
            j++;
        }
        rank[i] = count;
        i++;
    }
}

int *get_rank(t_stack *stack)
{
    int *arr;
    int *rank;
    int len;

    len = size(stack);
    if (len == 0)
        return (0);
    arr = get_copy(stack);
    if (!arr)
        return (NULL);
    rank = malloc(sizeof(int) * len);
    if (!rank)
    {
        free(arr);
        return (NULL);
    }
    check_sorted(arr, rank, len);
    free(arr);
    return (rank);
}

int get_chunk_size(int len)
{
   double root;
   
   root = sqrt(len);
   return (int)root;
}
