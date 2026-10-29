/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalhouda <kalhouda@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 23:33:44 by kalhouda          #+#    #+#             */
/*   Updated: 2026/09/27 13:32:58 by kalhouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	c;
	size_t	len_little;

	len_little = ft_strlen(little);
	if (*little == '\0')
		return ((char *)big);
	i = 0;
	while (i < len && big[i] != '\0')
	{
		c = 0;
		while (i + c < len && big[i + c] == little[c])
		{
			c++;
			if (c == len_little)
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}
