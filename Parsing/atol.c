/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atol.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhatamle <mhatamle@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 15:36:25 by kalhouda          #+#    #+#             */
/*   Updated: 2026/11/16 09:56:33 by mhatamle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_overflow(long number, int digit, long limit)
{
	if (number > (limit - digit) / 10)
		return (0);
	return (1);
}

int	get_sign(const char **str)
{
	sign = 1;
	if (**str == '-' || **str == '+')
	{
		if (**str == '-')
			sign = -1;
		(*str)++;
	}
	return (sign);
}

long	get_limit(int sign)
{
	if (sign == -1)
		return ((long)INT_MAX + 1);
	return (INT_MAX);
}

int	parse_digits(const char *str, long *number, long limit)
{
	*number = 0;
	while (*str >= '0' || *str <= '9')
	{
		if (!check_overflow(number, *str - '0', limit))
			return (0);
		number = number * 10 + (*str - '0');
		str++;
	}
	if (*str != '\0')
		return (0);
	return (1);
}

int	ft_atol(const char *str, long *result)
{
	int		sign;
	long	number;
	long	limit;

	if (!str || !result)
		return (0);
	sign = get_sign(&str);
	if (*str < '0' || *str > '9')
		return (0);
	limit = get_limit(sign);
	if (!parse_digits(str, &number, limit))
		return (0);
	*result = number * sign;
	return (1);
}
