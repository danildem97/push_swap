/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_func.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddemydov <ddemydov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 20:17:08 by ddemydov          #+#    #+#             */
/*   Updated: 2023/07/29 20:17:11 by ddemydov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_stack **dest, t_stack **add)
{
	int		tmp;
	t_stack	*tmp2;

	tmp = (*add)->data;
	tmp2 = *add;
	*add = (*add)->next;
	free(tmp2);
	ft_push_node_bottom(dest, tmp);
}

void	pa(t_stack **stack_a, t_stack **stack_b)
{
	push(stack_a, stack_b);
	ft_printstr("pa\n");
}

void	pb(t_stack **stack_b, t_stack **stack_a)
{
	push(stack_b, stack_a);
	ft_printstr("pb\n");
}
