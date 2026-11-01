/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhatamle <mhatamle@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 15:54:25 by kalhouda          #+#    #+#             */
/*   Updated: 2026/10/29 13:03:49 by mhatamle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
int   main(int argc, char **argv)
{
    int i;
    int value;
    t_stack *node;
    t_stack_list a;

    a.head = NULL;
    a.tail = NULL;
    i = 1;
    while (argc > i)
    {
        value = ft_atoi(argv[i]);
        i++;
        node = new_node(value);
        if (node == NULL)
        {
            free_stack(&a);
            return (1);
        }
        add_node_back(&a, node);
    }
    return (0);
}