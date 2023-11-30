/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddemydov <ddemydov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 20:17:55 by ddemydov          #+#    #+#             */
/*   Updated: 2023/07/29 20:17:58 by ddemydov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sign(char c)
{
	return (c == '+' || c == '-');
}

int	is_number(char *av)
{
	int	i;

	i = 0;
	if (is_sign(av[i]) && av[i + 1] != '\0')
		i++;
	while (av[i] && ft_isdigit(av[i]))
		i++;
	if (av[i] != '\0' && !ft_isdigit(av[i]))
		return (0);
	return (1);
}

void	is_integer(long num)
{
	if (num > INT_MAX || num < INT_MIN)
	{
		write(2, "Error\n", 7);
		exit (1);
	}
}

void	check_input(char **av)
{
	int	i;

	i = 1;
	while (av[i])
	{
		if (!(is_number(av[i])))
		{
			write(2, "Error\n", 7);
			exit (1);
		}
		i++;
	}
}
