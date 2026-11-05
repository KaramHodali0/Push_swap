/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_split.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalhouda <kalhouda@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 10:24:18 by mhatamle          #+#    #+#             */
/*   Updated: 2026/11/05 23:34:41 by kalhouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void free_split(char **numbers)
{
   int i;

   i = 0;
   while (numbers[i] != NULL)
   {
      free(numbers[i]);
      i++;
   }
   free(numbers);
}
