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

    if(!ft_atol(str, &num))
        return (false);
  return(true);
}

bool parse_number(char *str, int *number)
{
    long value;

    if (!is_valid_syntax(str))
        return (false);
    if (!ft_atol(str, &value))
        return (false);
    *number = (int)value;
    return (true);
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

bool check_duplicate_value(t_stack *stack, int value)
{
    while (stack)
    {
        if (stack->value == value)
            return (true);
        stack = stack->next;
    }
    return (false);
}

bool check_duplicate(t_stack *stack)
{
    t_stack *current;

    current = stack;
    while (current)
    {
        if (check_duplicate_value(current->next, current->value))
            return (true);
        current = current->next;
    }
    return (false);
}