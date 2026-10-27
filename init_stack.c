#include "push_swap.h"

void   init_stack(t_stack_list *a, int argc, char **argv)
{
    int i;
    int value;

    i = 1;
    while (argc > i)
    {
        value = ft_atoi(argv[i]);
        i++;
    }
}