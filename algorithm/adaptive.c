/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   adaptive.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhatamle <mhatamle@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 09:26:01 by mhatamle          #+#    #+#             */
/*   Updated: 2026/11/16 09:26:03 by mhatamle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	adaptive_sort(t_stack_list *a, t_stack_list *b, operations *stats)
{
	float	disorder_value;

	disorder_value = disorder(a->head);
	if (disorder_value < 0)
		return ;
	if (disorder_value < 0.2)
		simple_sort(a, b, stats);
	else if (disorder_value < 0.5)
		chunk_sort(a, b, stats);
	else
		radix_sort(a, b, stats);
}
