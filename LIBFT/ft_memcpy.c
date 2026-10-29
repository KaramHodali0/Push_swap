/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalhouda <kalhouda@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 16:26:50 by kalhouda          #+#    #+#             */
/*   Updated: 2026/09/13 13:49:24 by kalhouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*ptr_to_dest;
	const unsigned char	*ptr_to_src;
	size_t				i;

	i = 0;
	ptr_to_dest = (unsigned char *)dest;
	ptr_to_src = (const unsigned char *)src;
	while (i < n)
	{
		ptr_to_dest[i] = ptr_to_src[i];
		i++;
	}
	return (dest);
}
