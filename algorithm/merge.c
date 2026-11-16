/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   merge.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhatamle <mhatamle@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 09:26:16 by mhatamle          #+#    #+#             */
/*   Updated: 2026/11/16 10:25:43 by mhatamle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	merge_left(int *arr, int *tmp, long *i, t_merge m)
{
	while (*i <= m.mid)
	{
		tmp[m.k] = arr[*i];
		(*i)++;
		m.k++;
	}
}

static void	merge_right(int *arr, int *tmp, long *j, t_merge m)
{
	m.k = m.mid + 1;
	while (*j <= m.right)
	{
		tmp[m.k] = arr[*j];
		(*j)++;
		m.k++;
	}
}

void	copy_back(int *arr, int *tmp, t_merge m)
{
	long	i;

	i = m.left;
	while (i <= m.right)
	{
		arr[i] = tmp[i];
		i++;
	}
}

long	merge_count(int *arr, int *tmp, t_merge m)
{
	long	i;
	long	j;
	long	count;

	i = m.left;
	j = m.mid + 1;
	m.k = m.left;
	count = 0;
	while (i <= m.mid && j <= m.right)
	{
		if (arr[i] <= arr[j])
			tmp[m.k++] = arr[i++];
		else
		{
			tmp[m.k++] = arr[j++];
			count += m.mid - i + 1;
		}
	}
	merge_left(arr, tmp, &i, m);
	merge_right(arr, tmp, &j, m);
	copy_back(arr, tmp, m);
	return (count);
}
