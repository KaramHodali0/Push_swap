/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atol.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalhouda <kalhouda@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 15:36:25 by kalhouda          #+#    #+#             */
/*   Updated: 2026/11/05 23:34:53 by kalhouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int check_overflow(long number, int digit, long limit)
{
    if (number > (limit - digit) / 10)
        return (0);
    return (1);
}

int ft_atol(const char *str, long *result)
{
    int     sign;
    long    number;
    long    limit;

    if (!str || !result)
        return (0);
    sign = 1;
    if (*str == '-' || *str == '+')
    {
        if (*str == '-')
            sign = -1;
        str++;
    }
    if (*str < '0' || *str > '9')
        return (0);
    limit = INT_MAX;
    if (sign == -1)
        limit = (long)INT_MAX + 1;
    number = 0;
    while (*str >= '0' && *str <= '9')
    {
        if (!check_overflow(number, *str - '0', limit))
            return (0);
        number = number * 10 + (*str - '0');
        str++;
    }
    if (*str != '\0')
        return (0);
    *result = number * sign;
    return (1);
}