/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddemydov <ddemydov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 20:16:57 by ddemydov          #+#    #+#             */
/*   Updated: 2023/07/29 20:16:59 by ddemydov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft/libft.h"
# include "ft_printf/ft_printf.h"

typedef struct s_stack
{
	int				pos;
	int				move;
	int				data;
	struct s_stack	*next;
}	t_stack;

t_stack	*stack_last_node(t_stack *stack);
t_stack	*stack_before_last_node(t_stack *stack);
t_stack	*create_stack(t_stack *stack, char **argv, int argc);
void	ft_push_node_bottom(t_stack **stack, int a);
void	check_doubles(t_stack *a);
void	check_if_int(char **av);
void	ft_print_stack(t_stack *t);
void	swap(t_stack **stack);
void	small_sort(t_stack **stack);
void	sort(t_stack **stack_a, t_stack **stack_b);
void	move_to_b(t_stack **stack_a, t_stack **stack_b);
void	find_cost(t_stack **a, t_stack **b);
void	move_to_a(t_stack **a, t_stack **b);
void	last_move(t_stack **a);
void	sort_five(t_stack **stack_a, t_stack **stack_b);
void	do_move(t_stack **a, t_stack **b, int pos, int move);
void	find_best_move(t_stack **a, t_stack **b);
void	free_stack(t_stack **stack);
void	is_integer(long num);
void	two_sort(t_stack **stack);
void	check_input(char **av);
void	rotate_silent(t_stack **stack_a);
void	reverse_silent(t_stack **stack_a);
void	push(t_stack **dest, t_stack **add);
void	free_stack(t_stack **stack);
void	double_silent_rotate(t_stack **stack_a, t_stack **stack_b);
void	double_silent_reverse_rotate(t_stack **stack_a, t_stack **stack_b);
void	double_silent_swap(t_stack **stack_a, t_stack **stack_b);
int		find_max(t_stack *stack_a);
int		size_of_stack(t_stack *stack);
int		find_min(t_stack *stack_a);
int		find_mid(t_stack *a);
int		is_sorted(t_stack *stack);
int		find_pos_in_a(t_stack *a, int elem);
int		find_pos_in_b(t_stack *b, int elem);
int		*make_arr(t_stack *a);

void	sa(t_stack **stack_a);
void	sb(t_stack **stack_b);
void	ss(t_stack **stack1, t_stack **stack2);
void	pa(t_stack **stack_a, t_stack **stack_b);
void	pb(t_stack **stack_b, t_stack **stack_a);
void	ra(t_stack **stack_a);
void	rb(t_stack **stack_b);
void	rr(t_stack **stack_a, t_stack **stack_b);
void	rra(t_stack **stack_a);
void	rrb(t_stack **stack_b);
void	rrr(t_stack **stack_a, t_stack **stack_b);

#endif
