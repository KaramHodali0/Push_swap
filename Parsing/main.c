/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhatamle <mhatamle@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 15:54:25 by kalhouda          #+#    #+#             */
/*   Updated: 2026/11/04 10:26:01 by mhatamle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int   main(int argc, char **argv)
{
    int i;
    int value;
    t_stack *node;
    t_stack_list a;
    char **numbers;

    a.head = NULL;
    a.tail = NULL;
    i = 1;
    if (argc == 2)
    {
        numbers = ft_split(argv[1], ' ');
        if (numbers == NULL)
            return (1);
        i = 0;
        while (numbers[i] != NULL)
        {
            value = ft_atoi(numbers[i]);
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
    else
    {
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
    free_split(numbers);
    return (0);
}
