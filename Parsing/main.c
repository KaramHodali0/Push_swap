/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhatamle <mhatamle@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 15:54:25 by kalhouda          #+#    #+#             */
/*   Updated: 2026/10/29 13:03:49 by mhatamle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
int   main(t_stack_list *a, int argc, char **argv)
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