#include "push_swap.h"

void    push(t_stack **src, t_stack **dst)
{
    t_stack *tmp;

    if (!src || !*src)
        return;
    tmp = *src;
    *src = tmp->next;
    if (*src)
        (*src)->prev =  NULL;
    tmp->next = *dst;
    if (*dst)
        (*dst)->prev = tmp;
    tmp->prev = NULL;
    *dst = tmp;
}