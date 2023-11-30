/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   multi_func.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddemydov <ddemydov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 20:17:14 by ddemydov          #+#    #+#             */
/*   Updated: 2023/07/29 20:17:17 by ddemydov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ss(t_stack **stack1, t_stack **stack2)
{
	swap(stack1);
	swap(stack2);
	ft_printstr("ss\n");
}

void	rrr(t_stack **stack_a, t_stack **stack_b)
{
	reverse_silent(stack_a);
	reverse_silent(stack_b);
	ft_printstr("rrr\n");
}

void	rr(t_stack **stack_a, t_stack **stack_b)
{
	rotate_silent(stack_a);
	rotate_silent(stack_b);
	ft_printstr("rr\n");
}
