/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhatamle <mhatamle@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 15:28:57 by mhatamle          #+#    #+#             */
/*   Updated: 2026/10/25 15:59:58 by mhatamle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int size(t_stack *stack)
{
    int size;
    
    size = 0;
    while (stack != NULL)
        {
            stack = stack->next;
            size++;
        }
        return (size);
}