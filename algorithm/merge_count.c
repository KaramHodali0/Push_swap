/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   merge_count.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhatamle <mhatamle@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 09:26:23 by mhatamle          #+#    #+#             */
/*   Updated: 2026/11/16 09:26:24 by mhatamle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	count_inversions(int *arr, int *tmp, long left, long right)
{
	long	mid;
	long	count;

	if (left >= right)
		return (0);
	mid = left + (right - left) / 2;
	count = count_inversions(arr, tmp, left, mid);
	count += count_inversions(arr, tmp, mid + 1, right);
	count += merge_count(arr, tmp, left, mid, right);
	return (count);
}
