/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhatamle <mhatamle@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 09:22:31 by mhatamle          #+#    #+#             */
/*   Updated: 2026/10/29 09:22:35 by mhatamle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void   init_stack(t_stack_list *a, int argc, char **argv)
{
    int i;
    int value;
    t_stack *node;

    i = 1;
    while (argc > i)
    {
        value = ft_atoi(argv[i]);
        node = new_node(value);
        if (node == NULL)
            return;
        add_node_back(a, node);
        i++;
    }
}

void    init_rank(t_stack_list *a, int *rank, int len)
{
    t_stack *node;
    int i;

    if(size(a->head) != len)
        return;
    node = a->head;
    i = 0;
    while (node != NULL)
    {
        node->rank = rank[i];
        node = node->next;
        i++;
    }
}
~                  