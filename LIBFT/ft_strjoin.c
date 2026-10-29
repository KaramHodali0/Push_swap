/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalhouda <kalhouda@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 12:43:31 by kalhouda          #+#    #+#             */
/*   Updated: 2026/09/13 13:49:24 by kalhouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	i;
	size_t	n;
	size_t	p;

	n = ft_strlen(s1) + ft_strlen(s2) + 1;
	i = 0;
	result = malloc(n);
	if (!result)
		return (NULL);
	while (i < n && s1[i] != '\0')
	{
		result[i] = s1[i];
		i++;
	}
	p = 0;
	while (i + p < n - 1)
	{
		result[i + p] = s2[p];
		p++;
	}
	result[i + p] = '\0';
	return (result);
}
