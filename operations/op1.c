/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op1.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhatamle <mhatamle@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 10:26:46 by mhatamle          #+#    #+#             */
/*   Updated: 2026/10/22 16:30:08 by kalhouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack **a)
{
	if (!a || !*a || !(*a)->next)
		return;
	rotate(a);

}

void	rb(t_stack **b)
{
	if (!b || !*b || !(*b)->next)
		return;
	rotate(b);
}

void	sa(t_stack **a)
{
	if(!a || !*a || (!(*a)->next))
		return;
	swap(a);
}

void	sb(t_stack **b)
{
	if(!b || !*b || (!(*b)->next))
		return;
	swap(b);
}
