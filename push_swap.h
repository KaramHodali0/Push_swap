/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalhouda <kalhouda@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 10:40:45 by mhatamle          #+#    #+#             */
/*   Updated: 2026/11/08 15:45:49 by kalhouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <limits.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
#include "libft/libft.h"
#include <stdbool.h>

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

typedef enum e_algorithm
{
	SIMPLE = 1,
	MEDIUM = 2,
	COMPLEX = 3,
	ADAPTIVE = 4,
	BENCH = 5,
	INVALID = 0
} algorithm;

typedef struct s_operations
{
    int sa;
    int sb;
    int ss;
    int pa;
    int pb;
    int ra;
    int rb;
    int rr;
    int rra;
    int rrb;
    int rrr;
    int total_op;
}   operations;

void    push(t_stack_list *src, t_stack_list *dst);
void    pa(t_stack_list *a, t_stack_list *b, operations *stats);
void    pb(t_stack_list *a, t_stack_list *b, operations *stats);

void    swap(t_stack_list *stack);
void    sa(t_stack_list *a, operations *stats);
void    sb(t_stack_list *b, operations *stats);
void    ss(t_stack_list *a, t_stack_list *b, operations *stats);

void    rotate(t_stack_list *stack);
void    ra(t_stack_list *a, operations *stats);
void    rb(t_stack_list *b, operations *stats);
void    rr(t_stack_list *a, t_stack_list *b, operations *stats);

void    reverse_rotate(t_stack_list *stack);
void    rra(t_stack_list *a, operations *stats);
void    rrb(t_stack_list *b, operations *stats);
void    rrr(t_stack_list *a, t_stack_list *b, operations *stats);

void radix_sort(t_stack_list *a, t_stack_list *b, operations *stats);
void free_split(char **numbers);
void free_stack(t_stack_list *stack);
t_stack *new_node(int value);
void add_node_back(t_stack_list *stack, t_stack *node);
bool check_duplicate(char *str);
bool is_valid_syntax(char *str);
bool is_within_int_range(char *str);
void init_stack(t_stack_list *a, int argc, char **argv);
void init_rank(t_stack_list *a, int *rank, int len);
int *get_copy(t_stack *stack);
void check_sorted(int *arr, int *rank, int len);
int *get_rank(t_stack *stack);
int get_chunk_size(int len);
static void push_chunk(t_stack_list *a, t_stack_list *b, int start, int end);
void sort_chunks(t_stack_list *a, t_stack_list *b);
int find_max_rank(t_stack *b);
int find_max_position(t_stack *b);
void sort_back_to_a(t_stack_list *a, t_stack_list *b);
int validate_and_add(t_stack_list *a, char *str);
#endif
