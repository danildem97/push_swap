/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexa_low.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddemydov <ddemydov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 20:18:42 by ddemydov          #+#    #+#             */
/*   Updated: 2023/07/29 20:18:45 by ddemydov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhexa_low(unsigned int n)
{
	int		i;
	int		j;
	char	*base;
	char	newstr[100];

	i = 0;
	base = "0123456789abcdef";
	if (n == 0)
	{
		i = 1;
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
	i--;
	while (i >= 0)
		ft_printchar(newstr[i--]);
	return (j);
}
