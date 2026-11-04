/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhatamle <mhatamle@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 14:27:52 by kalhouda          #+#    #+#             */
/*   Updated: 2026/11/04 10:28:37 by mhatamle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool check_duplicate (char *str)
{ 
    t_stack *current;
    t_stack *next_current

    current = stack;
    next_current = current->next;
    while (current)
    {
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

bool    is_valid_syntax(char *str)
{
    int sign;

    sign = 0;
    while (*str)
    {
        if (*str >= '0' && *str <= '9')
            continue;
        else
            return (0);
        if (*str == '+' || *str == '-')
            sign++;
        *str++;
    }
    if (sign > 1)
        return(0);
    else
        return(1);
    return (0);
}

bool    is_within_int_range(char *str)
{
    // i have to complete this in the home 
}
