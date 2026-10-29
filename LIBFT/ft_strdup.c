/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalhouda <kalhouda@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 19:36:41 by kalhouda          #+#    #+#             */
/*   Updated: 2026/09/13 13:49:24 by kalhouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*pew;
	char	*start;
	size_t	p;

	p = ft_strlen(s);
	pew = malloc(p + 1);
	if (!pew)
		return (NULL);
	start = pew;
	while (*s != '\0')
	{
		*pew = *s;
		s++;
		pew++;
	}
	*pew = '\0';
	return (start);
}
