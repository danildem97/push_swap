/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddemydov <ddemydov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 20:17:02 by ddemydov          #+#    #+#             */
/*   Updated: 2023/07/29 20:17:05 by ddemydov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_arg(char **argv)
{
	if (argv[1][0] == '\0')
	{
		write(2, "Error\n", 7);
		exit (1);
	}
}

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	check_arg(argv);
	if (argc == 1)
		return (0);
	stack_a = NULL;
	stack_b = NULL;
	stack_a = create_stack(stack_a, argv, argc);
	check_doubles(stack_a);
	if (is_sorted(stack_a))
	{
		free_stack(&stack_a);
		exit (1);
	}
	if (argc == 3)
		two_sort(&stack_a);
	else if (argc == 4)
		small_sort(&stack_a);
	else if (argc == 6)
		sort_five(&stack_a, &stack_b);
	else
		sort(&stack_a, &stack_b);
	free_stack(&stack_a);
	return (0);
}
