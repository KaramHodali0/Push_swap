#include "push_swap.h"

long    count_inversions(int *arr, int *tmp, long left, long right)
{
    long    mid;
    long    count;

    if (left >= right)
        return (0);
    mid = left + (right - left) / 2;
    count = count_inversions(arr, tmp, left, mid);
    count += count_inversions(arr, tmp, mid + 1, right);
    count += merge_count(arr, tmp, left, mid, right);
    return (count);
}