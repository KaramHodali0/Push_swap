/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhatamle <mhatamle@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 10:26:46 by mhatamle          #+#    #+#             */
/*   Updated: 2026/10/22 14:44:46 by mhatamle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ra(t_stack **a)
{
	t_stack	*last;
	t_stack	*tmp;
	t_stack	*first_next;

	if (!a || !*a || !(*a)->next)
		return;
	last = *a;
	tmp = *a;
	first_next = (*a)->next;
	while (last->next)
		last = last->next;
	last->next = tmp;
	tmp->next = NULL;
	*a = first_next;

}

void	pb(t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	if (!a || !*a)
		return;
	tmp = *a;
	*a = tmp->next;
	tmp->next = *b;
	*b = tmp;
}

void	sa(t_stack **a)
{
	t_stack	*tmp;

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

	
