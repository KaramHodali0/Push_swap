/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalhouda <kalhouda@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 15:54:25 by kalhouda          #+#    #+#             */
/*   Updated: 2026/11/03 14:24:57 by kalhouda         ###   ########.fr       */
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


    // this condition is for this case ./a.out "1 2 3 4"

    if (argc == 2)
    {
        i = 0;
        while (argv[1][i] != '\0')
        {
            // we have to check if there is Integer Overflow. also right here
            value = ft_atoi(argv[1][i]);
            node = new_node(value);
             if (node == NULL)
            {
                free_stack(&a);
                return (1);
            }
            add_node_back(&a, node);
            i++;
        }
    }


    // this while is for this case ./a.out 1 2 3 4

    else
    {
    while (argc > i)
    {
        // we have to check if there is Integer Overflow.
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
    }
    return (0);
}