/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pew.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalhouda <kalhouda@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 14:37:16 by kalhouda          #+#    #+#             */
/*   Updated: 2026/10/25 16:23:31 by kalhouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

float	disorder(t_stack *stack, long size)
{
	long		mistake;
	long		total;
	t_stack		*current;
	t_stack		*tmp;

	mistake = 0;
	total = 0;
	current = stack;
	while (current && current->next)
	{
		tmp = current->next;
		while (tmp)
		{
			total++;
			if (current->value > tmp->value)
				mistake++;
			tmp = tmp->next;
		}
		current = current->next;
	}
	if (total == 0)
		return (0);
	return ((float)(mistake / total));
}
