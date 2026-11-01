#include "push_swap.h"

void free_stack(t_stack_list *stack)
{
    t_stack *current;
    t_stack *next;

    if (!stack)
        return;
    current = stack->head;
    while (current)
    {
        next = current->next;
        free(current);
        current = next;
    }
    stack->head = NULL;
    stack->tail = NULL;
}