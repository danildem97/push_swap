/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   silent_func.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddemydov <ddemydov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 20:16:32 by ddemydov          #+#    #+#             */
/*   Updated: 2023/07/29 20:16:35 by ddemydov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	double_silent_rotate(t_stack **stack_a, t_stack **stack_b)
{
	reverse_silent(stack_a);
	reverse_silent(stack_b);
}

void	double_silent_reverse_rotate(t_stack **stack_a, t_stack **stack_b)
{
	rotate_silent(stack_a);
	rotate_silent(stack_b);
}

void	double_silent_swap(t_stack **stack_a, t_stack **stack_b)
{
	swap(stack_a);
	swap(stack_b);
}

void	rotate_silent(t_stack **stack_a)
{
	t_stack	*tmp;
	t_stack	*bottom;

	tmp = *stack_a;
	*stack_a = (*stack_a)->next;
	bottom = stack_last_node(*stack_a);
	tmp->next = NULL;
	bottom->next = tmp;
}

void	reverse_silent(t_stack **stack_a)
{
	t_stack	*bottom;
	t_stack	*bottom2;

	bottom = stack_last_node(*stack_a);
	bottom2 = stack_before_last_node(*stack_a);
	bottom->next = *stack_a;
	*stack_a = bottom;
	bottom2->next = NULL;
}
