/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddemydov <ddemydov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 20:17:43 by ddemydov          #+#    #+#             */
/*   Updated: 2023/07/29 20:17:46 by ddemydov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	find_cost(t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	tmp = *b;
	while (tmp)
	{
		tmp->pos = find_pos_in_a(*a, tmp->data);
		tmp->move = find_pos_in_b(*b, tmp->data);
		tmp = tmp->next;
	}
	tmp = *b;
}

t_stack	*create_node(int a)
{
	t_stack	*new;

	new = (t_stack *) malloc (sizeof(t_stack));
	new->data = a;
	new->next = NULL;
	return (new);
}

void	ft_push_node_bottom(t_stack **stack, int a)
{
	t_stack	*node;

	node = create_node(a);
	node->next = *stack;
	*stack = node;
}

t_stack	*create_stack(t_stack *stack, char **argv, int argc)
{
	int		i;
	long	j;

	i = argc - 1;
	check_input(argv);
	j = ft_atoi(argv[i]);
	is_integer(j);
	stack = create_node(j);
	i--;
	while (i > 0)
	{
		j = ft_atoi(argv[i]);
		is_integer(j);
		ft_push_node_bottom(&stack, j);
		i--;
	}
	return (stack);
}
