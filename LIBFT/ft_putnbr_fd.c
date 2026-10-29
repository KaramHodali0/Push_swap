/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalhouda <kalhouda@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 16:55:31 by kalhouda          #+#    #+#             */
/*   Updated: 2026/09/24 13:30:05 by kalhouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nbr;
	char	pr_one_digit[12];
	size_t	i;

	nbr = n;
	i = 0;
	if (nbr < 0)
	{
		write(fd, "-", 1);
		nbr = -nbr;
	}
	if (nbr == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	while (nbr > 0)
	{
		pr_one_digit[i] = (nbr % 10) + '0';
		nbr /= 10;
		i++;
	}
	while (i-- > 0)
		write(fd, &pr_one_digit[i], 1);
}
