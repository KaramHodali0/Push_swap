/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalhouda <kalhouda@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 17:03:06 by nalayyou          #+#    #+#             */
/*   Updated: 2026/09/13 13:49:24 by kalhouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strnlen(const char *p, size_t t)
{
	size_t	counter;

	counter = 0;
	while (counter < t && p[counter])
		counter++;
	return (counter);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	counter_src;
	size_t	counter_while;
	size_t	counter_dst;

	dst_len = ft_strnlen(dst, size);
	if (dst_len < size)
		counter_while = size - dst_len - 1;
	else
		counter_while = 0;
	counter_src = 0;
	counter_dst = dst_len;
	while (counter_src < counter_while && src[counter_src] != '\0')
	{
		dst[counter_dst] = src[counter_src];
		counter_src++;
		counter_dst++;
	}
	if (dst_len < size)
		dst[counter_dst] = '\0';
	return (dst_len + ft_strlen(src));
}
