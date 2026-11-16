/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   disorder.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalhouda <kalhouda@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 14:37:16 by kalhouda          #+#    #+#             */
/*   Updated: 2026/10/25 17:03:53 by kalhouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*stack_to_array(t_stack *stack, long size)
{
	int		*arr;
	long	i;

	arr = malloc(sizeof(int) * size);
	if (!arr)
		return (NULL);
	i = 0;
	while (stack && i < size)
	{
		arr[i] = stack->value;
		i++;
		stack = stack->next;
	}
	if (i != size)
	{
		free(arr);
		return (NULL);
	}
	return (arr);
}

static long	stack_size(t_stack *stack)
{
	long	size;

	size = 0;
	while (stack)
	{
		size++;
		stack = stack->next;
	}
	return (size);
}

static float	free_arrays(int *arr)
{
	free(arr);
	return (-1.0f);
}

float	disorder(t_stack *stack)
{
	int		*arr;
	int		*tmp;
	long	inversions;
	long	total;
	long	size;

	size = stack_size(stack);
	if (size < 2)
		return (0.0f);
	arr = stack_to_array(stack, size);
	if (!arr)
		return (-1.0f);
	tmp = malloc(sizeof(int) * size);
	if (!tmp)
		return (free_arrays(arr));
	inversions = count_inversions(arr, tmp, 0, size - 1);
	total = size * (size - 1) / 2;
	free(arr);
	free(tmp);
	return ((float)inversions / total);
}
