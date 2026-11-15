#include "push_swap.h"

void    adaptive_sort(t_stac_list *a, t_stac_list *b , operations *stats)
{
    float   disorder_value;

    disorder_value = disorder(a->head);
    if (disorder_value < 0)
        return ;
    if (disorder_value < 0.2)
        simple_sort(a, b, stats);
    else if(disorder_value < 0.5)
        chunk_sort(a, b, stats);
    else
        radix_sort(a, b, stats);
}