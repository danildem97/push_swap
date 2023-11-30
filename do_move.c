/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_move.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddemydov <ddemydov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 20:18:02 by ddemydov          #+#    #+#             */
/*   Updated: 2023/07/29 20:18:05 by ddemydov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rr_both(t_stack **a, t_stack **b, int *pos, int *move)
{
	while (*pos > 0 && *move > 0)
	{
		rr(a, b);
		(*pos)--;
		(*move)--;
	}
}

static void	rrr_both(t_stack **a, t_stack **b, int *pos, int *move)
{
	while (*pos < 0 && *move < 0)
	{
		rrr(a, b);
		(*pos)++;
		(*move)++;
	}
}

static void	rotate_a(t_stack **a, int *pos)
{
	while (*pos)
	{
		if (*pos > 0)
		{
			ra(a);
			(*pos)--;
		}
		else if (*pos < 0)
		{
			rra(a);
			(*pos)++;
		}
	}
}

static void	rotate_b(t_stack **b, int *move)
{
	while (*move)
	{
		if (*move < 0)
		{
			rrb(b);
			(*move)++;
		}
		else if (*move > 0)
		{
			rb(b);
			(*move)--;
		}
	}
}

void	do_move(t_stack **a, t_stack **b, int pos, int move)
{
	if (pos > 0 && move > 0)
		rr_both(a, b, &pos, &move);
	else if (pos < 0 && move < 0)
		rrr_both(a, b, &pos, &move);
	rotate_a(a, &pos);
	rotate_b(b, &move);
	pa(a, b);
}
