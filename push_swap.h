/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhatamle <mhatamle@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 10:40:45 by mhatamle          #+#    #+#             */
/*   Updated: 2026/11/04 10:31:29 by mhatamle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H


#include <stdlib.h>
#include <unistd.h>
#include <math.h>
#include "libft/libft.h"

typedef struct s_stack
{
	int value;
	int rank;
	struct s_stack *next;
	struct s_stack *prev;
} t_stack;

typedef struct s_stack_list
{
	t_stack *tail;
	t_stack *head;
} t_stack_list;

void push(t_stack **src, t_stack **dst);
void swap(t_stack_list *stack);
void rotate(t_stack_list *stack);
void pb(t_stack **a, t_stack **b);
void ba(t_stack **a, t_stack **b);
void ra(t_stack **a);
void rb(t_stack **b);
void sa(t_stack **a);
void sb(t_stack **b);
void	free_split(char **numbers);
void free_stack(t_stack_list *stack);
t_stack *new_node(int value);
void add_node_back(t_stack_list *stack, t_stack *node);
bool check_duplicate (char *str);
bool    is_valid_syntax(char *str);
bool    is_within_int_range(char *str);
void   init_stack(t_stack_list *a, int argc, char **argv);
void    init_rank(t_stack_list *a, int *rank, int len);
int *get_copy(t_stack *stack);
void    check_sorted(int *arr, int *rank, int len);
int *get_rank(t_stack *stack);
int get_chunk_size(int len);
static void    push_chunk(t_stack_list *a, t_stack_list *b, int start , int end);
void    sort_chunks(t_stack_list *a, t_stack_list *b);
int   find_max_rank(t_stack *b);
int find_max_position(t_stack *b);
void    sort_back_to_a(t_stack_list *a, t_stack_list *b);


#endif
