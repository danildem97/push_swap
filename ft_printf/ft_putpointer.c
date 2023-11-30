/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddemydov <ddemydov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 20:18:21 by ddemydov          #+#    #+#             */
/*   Updated: 2023/07/29 20:18:24 by ddemydov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putpointer(unsigned long long n)
{
	size_t	i;
	size_t	j;
	char	*base;
	char	newstr[100];

	i = 0;
	base = "0123456789abcdef";
	if (n == 0)
	{
		ft_printchar('0');
		return (1);
	}
	while (n > 0)
	{
		newstr[i++] = base[n % 16];
		n /= 16;
	}
	newstr[i] = '\0';
	j = i;
	while (i > 0)
	{
		i--;
		ft_printchar(newstr[i]);
	}
	return (j);
}
