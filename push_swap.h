/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhatamle <mhatamle@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 10:40:45 by mhatamle          #+#    #+#             */
/*   Updated: 2026/11/16 10:16:07 by mhatamle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <limits.h>
# include <math.h>
# include <stdbool.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack
{
	int				value;
	int				rank;
	struct s_stack	*next;
	struct s_stack	*prev;
}					t_stack;

typedef struct s_stack_list
{
	t_stack			*tail;
	t_stack			*head;
}					t_stack_list;

typedef struct s_merge
{
	long	    left;
	long	    mid;
	long    	right;
	long    	k;
}               	t_merge;

typedef enum e_algorithm
{
	SIMPLE = 1,
	MEDIUM = 2,
	COMPLEX = 3,
	ADAPTIVE = 4,
	BENCH = 5,
	INVALID = 0
}					algorithm;

typedef struct s_operations
{
	int				sa;
	int				sb;
	int				ss;
	int				pa;
	int				pb;
	int				ra;
	int				rb;
	int				rr;
	int				rra;
	int				rrb;
	int				rrr;
	int				total_op;
}					operations;

void				push(t_stack_list *src, t_stack_list *dst);
void				pa(t_stack_list *a, t_stack_list *b, operations *stats);
void				pb(t_stack_list *a, t_stack_list *b, operations *stats);

void				swap(t_stack_list *stack);
void				sa(t_stack_list *a, operations *stats);
void				sb(t_stack_list *b, operations *stats);
void				ss(t_stack_list *a, t_stack_list *b, operations *stats);

void				rotate(t_stack_list *stack);
void				ra(t_stack_list *a, operations *stats);
void				rb(t_stack_list *b, operations *stats);
void				rr(t_stack_list *a, t_stack_list *b, operations *stats);

void				reverse_rotate(t_stack_list *stack);
void				rra(t_stack_list *a, operations *stats);
void				rrb(t_stack_list *b, operations *stats);
void				rrr(t_stack_list *a, t_stack_list *b, operations *stats);

void                adaptive_sort(t_stack_list *a, t_stack_list *b, operations *stats);
int                 *stack_to_array(t_stack *stack, long size);
float	            disorder(t_stack *stack);
long            	count_inversions(int *arr, int *tmp, long left, long right);

void	            copy_back(int *arr, int *tmp, t_merge m);
long	            merge_count(int *arr, int *tmp, t_merge m);
int	                size(t_stack *stack);

t_stack         	*new_node(int value);
void	            add_node_back(t_stack_list *stack, t_stack *node);
int	                check_overflow(long number, int digit, long limit);
int	                get_sign(const char **str);
long            	get_limit(int sign);

int	                parse_digits(const char *str, long *number, long limit);
int	                ft_atol(const char *str, long *result);
void	            free_split(char **numbers);
void            	free_stack(t_stack_list *stack);

bool	            is_valid_syntax(char *str);
bool            	is_within_int_range(char *str);
bool            	parse_number(char *str, int *number);
int             	validate_and_add(t_stack_list *a, char *str);

bool	            check_duplicate_value(t_stack *stack, int value);
bool            	check_duplicate(t_stack *stack);
int	                get_max_bits(t_stack *a);
void            	radix_sort(t_stack_list *a, t_stack_list *b, operations *stats);

void            	init_stack(t_stack_list *a, int argc, char **argv);
void            	init_rank(t_stack_list *a, int *rank, int len);
int	                *get_copy(t_stack *stack);
void            	check_sorted(int *arr, int *rank, int len);

int             	*get_rank(t_stack *stack);
int	                get_chunk_size(int len);
void            	sort_back_to_a(t_stack_list *a, t_stack_list *b);

void	            sort_chunks(t_stack_list *a, t_stack_list *b);
int	                find_max_rank(t_stack *b);
int             	find_max_position(t_stack *b);
t_stack         	*find_min(t_stack *stack);

int             	find_position(t_stack *stack, t_stack *target);
int             	stack_size(t_stack *stack);
void            	rotate_min_to_top(t_stack_list *a, operations *stats);
void            	simple_sort(t_stack_list *a, t_stack_list *b, operations *stats);


#endif
