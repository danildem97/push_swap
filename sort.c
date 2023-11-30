/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddemydov <ddemydov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 20:16:22 by ddemydov          #+#    #+#             */
/*   Updated: 2023/07/29 20:19:32 by ddemydov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	last_move(t_stack **a)
{
	int		min;
	int		count;
	int		size;

	min = find_min(*a);
	size = size_of_stack(*a);
	count = find_pos_in_b(*a, min);
	while (count > 0)
	{
		ra(a);
		count--;
	}
	while ((count) < 0)
	{
		rra(a);
		count++;
	}
}

void	two_sort(t_stack **stack)
{
	if ((*stack)->data > (*stack)->next->data)
		sa(stack);
}

void	small_sort(t_stack **s)
{
	if ((*s)->data > (*s)->next->data
		&& (*s)->data < (*s)->next->next->data)
		sa(s);
	else if ((*s)->data < (*s)->next->data
		&& (*s)->data > (*s)->next->next->data)
		rra(s);
	else if ((*s)->data > (*s)->next->data
		&& (*s)->next->data < (*s)->next->next->data)
		ra(s);
	else if ((*s)->data < (*s)->next->data
		&& (*s)->data < (*s)->next->next->data
		&& (*s)->next->data > (*s)->next->next->data)
	{
		rra(s);
		sa(s);
	}
	else if ((*s)->data > (*s)->next->data
		&& (*s)->next->data > (*s)->next->next->data)
	{
		ra(s);
		sa(s);
	}
}

void	sort_five(t_stack **stack_a, t_stack **stack_b)
{
	int	min;
	int	max;

	min = find_min(*stack_a);
	max = find_max(*stack_a);
	while (size_of_stack(*stack_b) < 2)
	{
		if ((*stack_a)->data == max || (*stack_a)->data == min)
			pb(stack_b, stack_a);
		else
			ra(stack_a);
	}
	small_sort(stack_a);
	pa(stack_a, stack_b);
	pa(stack_a, stack_b);
	if ((*stack_a)->data == max)
		ra(stack_a);
	else
	{
		sa(stack_a);
		ra(stack_a);
	}
}

void	sort(t_stack **a, t_stack **b)
{
	move_to_b(a, b);
	while (*b)
	{
		find_cost(a, b);
		find_best_move(a, b);
	}
	last_move(a);
}
