/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsdec.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddemydov <ddemydov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 20:19:20 by ddemydov          #+#    #+#             */
/*   Updated: 2023/07/29 20:19:23 by ddemydov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	ft_count(unsigned int n)
{
	int	i;

	i = 0;
	if (n == 0)
	{
		i++;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

int	ft_print_unsdec(unsigned int n)
{
	int	i;

	if (n < 0)
		i = ft_count(n) + 1;
	i = ft_count(n);
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_printchar(n + '0');
	return (i);
}
