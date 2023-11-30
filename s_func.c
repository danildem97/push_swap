/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_func.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddemydov <ddemydov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 20:16:44 by ddemydov          #+#    #+#             */
/*   Updated: 2023/07/29 20:16:47 by ddemydov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack **stack)
{
	int	tmp;

	if (*stack == NULL || (*stack)->next == NULL)
		return ;
	tmp = (*stack)->data;
	(*stack)->data = (*stack)->next->data;
	(*stack)->next->data = tmp;
}

void	sa(t_stack **stack_a)
{
	swap(stack_a);
	ft_printstr("sa\n");
}

void	sb(t_stack **stack_b)
{
	swap(stack_b);
	ft_printstr("sb\n");
}
