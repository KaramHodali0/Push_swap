#include "push_swap.h"

static	void merge_left(int	*arr, int *tmp, long *i, long *k, long mid)
{
	while (*i <= mid)
	{
		tmp[*k] = arr[*i];
		(*i)++;
		(*k)++;
	}
}

static	void merge_right(int *arr, int *tmp, long *j, long *k, long right)
{
	while (*j <= right)
	{
		tmp[*k] = arr[*j];
		(*j)++;
		(*k)++;
	}
}

long	merg_count(int *arr, int *tmp, long left, long mid, long right)
{
	long	i;
	long	j;
	long	k;
	long	count;

	i = left;
	j = mid + 1;
	k = left;
	count = 0;
	while (i <= mid && j <= right)
	{
		if (arr[i] <= arr[j])
			tmp[k++] = arr[i++];
		else
		{
			tmp[k++] = arr[j++];
			count += mid - i + 1;
		}
	}
	merge_left(arr, tmp, &i, &k, mid);
	merge_right(arr, tmp, &j, &k, right);
	i = left;
	while (i <= right)
	{
		arr[i] = tmp[i];
		i++;
	}
	return (count);
}