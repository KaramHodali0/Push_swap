/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhatamle <mhatamle@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 10:40:45 by mhatamle          #+#    #+#             */
/*   Updated: 2026/10/22 10:43:17 by mhatamle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP.H
#define PUSH_SWAP.H

typedef struct s_stack
{
	int		value;
	struct	s_stack *next;
} t_stack;
