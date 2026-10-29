/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalhouda <kalhouda@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 19:57:59 by kalhouda          #+#    #+#             */
/*   Updated: 2026/09/25 18:39:38 by kalhouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	length(long n)
{
	size_t	count;

	count = 0;
	if (n <= 0)
		count++;
	while (n)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*res;
	size_t	len;
	long	c;

	c = n;
	len = length(c);
	res = malloc(len + 1);
	if (!res)
		return (NULL);
	res[len] = '\0';
	if (c < 0)
	{
		res[0] = '-';
		c = -c;
	}
	if (c == 0)
		res[0] = '0';
	while (c)
	{
		res[--len] = (c % 10) + '0';
		c = c / 10;
	}
	return (res);
}
