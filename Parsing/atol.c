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

long atol(const char *nptr)
{
    char *str;
    int sign;
    long number;

    str = (char *)nptr;
    while (*str == ' ' || (*str >= 9 && *str <= 13))
        str++;
    sign = 0;
    if (*str == '-' || *str == '+')
    {
        if (*str == '-')
            sign++;
        str++;
    }
    number = 0;
    while (*str >= '0' && *str <= '9')
    {
        number = (number * 10) + *str - '0';
        str++;
    }
    if (sign % 2 != 0)
        number *= -1;
    return (number);
}