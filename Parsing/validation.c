/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalhouda <kalhouda@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 14:27:52 by kalhouda          #+#    #+#             */
/*   Updated: 2026/11/05 23:24:40 by kalhouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool check_duplicate(t_stack *stack)
{
    t_stack *current;
    t_stack *next_current;

    if (stack == NULL)
        return (0);
    current = stack;
    while (current)
    {
        next_current = current->next;
        while (next_current)
        {
            if (current->value == next_current->value)
                return (1);
            next_current = next_current->next;
        }
        current = current->next;
    }
    return (0);
}

bool is_valid_syntax(char *str)
{
    if (!str || !*str)
        return (false);
    if (*str == '+' || *str == '-')
        str++;
    if (!*str)
        return (false);
    while (*str)
    {
        if (*str < '0' || *str > '9')
            return (0);
        str++;
    }
    return (1);
}

bool is_within_int_range(char *str)
{
    long num;

    num = atol(str);
    if (num > 2147483647 || num < -2147483648)
        return (0);
    return (1);
}

bool parse_number(char *str, int *number)
{
    if (is_valid_syntax(str) == 1 && is_within_int_range(str) == 1)
    {
        *number = atoi(str);
        return (1);
    }
    else
        return (0);
}
int validate_and_add(t_stack_list *a, char *str)
{
    int value;
    t_stack *node;

    if (!parse_number(str, &value))
        return (0);
    if (check_duplicate_value(a->head, value))
        return (0);
    node = new_node(value);
    if (!node)
        return (0);
    add_node_back(a, node);
    return (1);
}