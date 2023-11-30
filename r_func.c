/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_func.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddemydov <ddemydov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 20:16:50 by ddemydov          #+#    #+#             */
/*   Updated: 2023/07/29 20:16:52 by ddemydov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack **stack_a)
{
	t_stack	*tmp;
	t_stack	*bottom;

	tmp = *stack_a;
	*stack_a = (*stack_a)->next;
	bottom = stack_last_node(*stack_a);
	tmp->next = NULL;
	bottom->next = tmp;
	ft_printstr("ra\n");
}

void	rb(t_stack **stack_b)
{
	t_stack	*tmp;
	t_stack	*bottom;

	tmp = *stack_b;
	*stack_b = (*stack_b)->next;
	bottom = stack_last_node(*stack_b);
	tmp->next = NULL;
	bottom->next = tmp;
	ft_printstr("rb\n");
}

void	rra(t_stack **stack_a)
{
	t_stack	*bottom;
	t_stack	*bottom2;

	bottom = stack_last_node(*stack_a);
	bottom2 = stack_before_last_node(*stack_a);
	bottom->next = *stack_a;
	*stack_a = bottom;
	bottom2->next = NULL;
	ft_printstr("rra\n");
}

void	rrb(t_stack **stack_b)
{
	t_stack	*bottom;
	t_stack	*bottom2;

	bottom = stack_last_node(*stack_b);
	bottom2 = stack_before_last_node(*stack_b);
	bottom->next = *stack_b;
	*stack_b = bottom;
	bottom2->next = NULL;
	ft_printstr("rrb\n");
}
