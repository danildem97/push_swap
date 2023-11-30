/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddemydov <ddemydov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 20:16:37 by ddemydov          #+#    #+#             */
/*   Updated: 2023/07/29 22:07:21 by ddemydov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*make_arr(t_stack *a)
{
	int	*arr;
	int	i;

	i = 0;
	arr = malloc ((size_of_stack(a) * sizeof(int)));
	while (a)
	{
		arr[i] = a->data;
		i++;
		a = a->next;
	}
	return (arr);
}

int	size_arr(int *arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		i++;
	}
	return (i);
}

int	find_mid(t_stack *a)
{
	int	*arr;
	int	i;
	int	tmp;
	int	mid;

	i = 0;
	tmp = 0;
	arr = make_arr(a);
	i = 0;
	while (i < size_arr(arr))
	{
		if (arr[i] > arr[i + 1])
		{
			tmp = arr[i];
			arr[i] = arr[i + 1];
			arr[i + 1] = tmp;
			i = 0;
		}
		else
			i++;
	}
	mid = arr[size_arr(arr) / 2];
	free(arr);
	return (mid);
}

int	find_max(t_stack *stack_a)
{
	int		tmp;
	t_stack	*temp;

	temp = stack_a;
	tmp = temp->data;
	while (temp)
	{
		if (temp->data > tmp)
			tmp = temp->data;
		temp = temp->next;
	}
	return (tmp);
}

int	find_min(t_stack *stack_a)
{
	int	tmp;

	tmp = stack_a->data;
	while (stack_a)
	{
		if (stack_a->data < tmp)
			tmp = stack_a->data;
		stack_a = stack_a->next;
	}
	return (tmp);
}
