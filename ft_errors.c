/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errors.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddemydov <ddemydov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 20:17:50 by ddemydov          #+#    #+#             */
/*   Updated: 2023/07/29 20:17:52 by ddemydov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(t_stack **stack)
{
	t_stack	*tmp;

	if (!stack || !(*stack))
		return ;
	while (*stack)
	{
		tmp = (*stack)->next;
		free(*stack);
		*stack = tmp;
	}
}

void	check_doubles(t_stack *a)
{
	t_stack	*tmp;
	int		data;

	tmp = a;
	while (a)
	{
		data = a->data;
		tmp = a->next;
		while (tmp)
		{
			if (tmp->data == data)
			{
				write(2, "Error\n", 7);
				free_stack(&a);
				exit (1);
			}
			tmp = tmp->next;
		}
		a = a->next;
	}
}
