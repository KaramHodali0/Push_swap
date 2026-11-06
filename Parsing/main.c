/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalhouda <kalhouda@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 15:54:25 by kalhouda          #+#    #+#             */
/*   Updated: 2026/11/06 02:08:19 by kalhouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
    int i;
    char **numbers;
    char **args;
    t_stack_list a;

    a.head = NULL;
    a.tail = NULL;
    numbers = NULL;
    if (argc == 1)
        return (0);
    if (argc == 2)
    {
        numbers = ft_split(argv[1], ' ');
        if (!numbers)
            return (1);
        args = numbers;
    }
    else
        args = &argv[1];
    i = 0;
    while (args[i])
    {
        if (!validate_and_add(&a, args[i]))
        {
            free_split(numbers);
            free_stack(&a);
            write(2, "Error\n", 6);
            return (1);
        }
        i++;
    }
    free_split(numbers);
    free_stack(&a);
    return (0);
}