/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper_validation.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhatamle <mhatamle@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 10:00:09 by mhatamle          #+#    #+#             */
/*   Updated: 2026/11/16 10:00:11 by mhatamle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

bool	is_valid_syntax(char *str)
{
	if (!str || !*str)
		return (false);
	if (*str == '+' || *str == '-')
		str++;
	if (!*str)
		return (false);
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

bool	is_within_int_range(char *str)
{
	long	num;

	if (!ft_atol(str, &num))
		return (false);
	return (true);
}
