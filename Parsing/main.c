/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalhouda <kalhouda@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 15:54:25 by kalhouda          #+#    #+#             */
/*   Updated: 2026/11/06 18:21:58 by kalhouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

algorithm check_flags(int argc, char **argv)
{
    int i;

    i = 2;
    if (argc > 1 && argv[1][0] == '-' && argv[1][1] == '-')
    {
        if (strcmp(argv[1], "--simple") == 0)
            return (1);
        else if (strcmp(argv[1], "--medium") == 0)
            return (2);
        else if (strcmp(argv[1], "--complex") == 0)
            return (3);
        else if (strcmp(argv[1], "--adaptive") == 0)
            return (4);
    }
    return (0);
}

int main(int argc, char **argv)
{
    int i;
    int *rank;
    char **numbers;
    char **args;
    t_stack_list a;
    t_stack_list b;

    a.head = NULL;
    a.tail = NULL;
    b.head = NULL;
    b.tail = NULL;
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
    if (size(a.head) <= 1)
    {
        free_stack(&a);
        return (0);
    }
    rank = get_rank(a.head);
    if (!rank || !init_rank(&a, rank, size(a.head)))
    {
        free(rank);
        free_stack(&a);
        return (1);
    }
    free(rank);
    sort_chunks(&a, &b);
    sort_back_to_a(&a, &b);
    free_stack(&a);
    free_stack(&b);
    return (0);
}