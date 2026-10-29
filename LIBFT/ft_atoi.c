/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalhouda <kalhouda@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 01:06:50 by kalhouda          #+#    #+#             */
/*   Updated: 2026/09/13 13:49:24 by kalhouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	char	*str;
	int		sign;
	int		number;

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
