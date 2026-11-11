/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalhouda <kalhouda@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 15:54:25 by kalhouda          #+#    #+#             */
/*   Updated: 2026/11/08 14:26:03 by kalhouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

algorithm	check_flags(int argc, char **argv)
{
	if (argc > 1 && argv[1][0] == '-' && argv[1][1] == '-')
	{
		if (ft_strncmp(argv[1], "--simple", 9) == 0)
			return (SIMPLE);
		else if (ft_strncmp(argv[1], "--medium", 9) == 0)
			return (MEDIUM);
		else if (ft_strncmp(argv[1], "--complex", 10) == 0)
			return (COMPLEX);
		else if (strcmp(argv[1], "--adaptive") == 11)
			return (ADAPTIVE);
		else if (strcmp(argv[1], "--bench") == 8)
			return (BENCH);
	}
	return (INVALID);
}

int	main(int argc, char **argv)
{
	algorithm		algo;
	int				i;
	int				*rank;
	char			**numbers;
	char			**args;
	t_stack_list	a;
	t_stack_list	b;

	// add the line decide whats the algo
	operations stats = {0};
	a.head = NULL;
	a.tail = NULL;
	b.head = NULL;
	b.tail = NULL;
	numbers = NULL;
	if (argc == 1)
		return (0);
	if (argc == 2)
	{
		numbers = ft_split(argv[1], ' ');
		if (!numbers)
			return (1);
		args = numbers;
	}
	else
		args = &argv[1];
	i = 0;
	while (args[i])
	{
		if (!validate_and_add(&a, args[i]))
		{
			free_split(numbers);
			free_stack(&a);
			write(2, "Error\n", 6);
			return (1);
		}
		i++;
	}
	free_split(numbers);
	if (size(a.head) <= 1)
	{
		free_stack(&a);
		return (0);
	}
	rank = get_rank(a.head);
	if (!rank || !init_rank(&a, rank, size(a.head)))
	{
		free(rank);
		free_stack(&a);
		return (1);
	}
	free(rank);
	sort_chunks(&a, &b);
	sort_back_to_a(&a, &b);
	free_stack(&a);
	free_stack(&b);
	return (0);
}
