/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddemydov <ddemydov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 20:16:27 by ddemydov          #+#    #+#             */
/*   Updated: 2023/07/29 20:19:35 by ddemydov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_pos_in_a(t_stack *a, int elem)
{
	int		count;
	t_stack	*tmp;
	int		size;

	size = size_of_stack(a);
	tmp = stack_last_node(a);
	count = 1;
	if ((a->data > elem && tmp->data < elem))
		count = 0;
	else
	{
		while (a->next && !(a->data < elem && a->next->data > elem))
		{
			count++;
			a = a->next;
		}
	}
	if (count > size / 2)
		return (count - size);
	return (count);
}

int	find_pos_in_b(t_stack *b, int elem)
{
	int	count;
	int	size;

	size = size_of_stack(b);
	count = 0;
	while (b->data != elem)
	{
		count++;
		b = b->next;
	}
	if (count > size / 2)
		return (count - size);
	return (count);
}

void	move_to_b(t_stack **stack_a, t_stack **stack_b)
{
	int	min;
	int	max;
	int	mid;

	min = find_min(*stack_a);
	max = find_max(*stack_a);
	mid = find_mid(*stack_a);
	while (size_of_stack(*stack_a) != 3)
	{
		if ((*stack_a)->data != min && (*stack_a)->data != max
			&& (*stack_a)->data != mid)
			pb(stack_b, stack_a);
		else
			ra(stack_a);
	}
	small_sort(stack_a);
}

int	make_positive(int a)
{
	if (a < 0)
		return (-a);
	return (a);
}

void	find_best_move(t_stack **a, t_stack **b)
{
	t_stack	*tmp;
	int		best;
	int		move;
	int		pos;

	tmp = *b;
	best = make_positive(tmp->pos) + make_positive(tmp->move);
	pos = tmp->pos;
	move = tmp->move;
	tmp = tmp->next;
	while (tmp)
	{
		if (make_positive(tmp->pos) + make_positive(tmp->move) < best)
		{
			best = make_positive(tmp->pos) + make_positive(tmp->move);
			pos = tmp->pos;
			move = tmp->move;
		}
		tmp = tmp->next;
	}
	do_move(a, b, pos, move);
}
