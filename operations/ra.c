/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhatamle <mhatamle@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 10:26:46 by mhatamle          #+#    #+#             */
/*   Updated: 2026/10/22 11:39:57 by mhatamle         ###   ########.fr       */
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

}

