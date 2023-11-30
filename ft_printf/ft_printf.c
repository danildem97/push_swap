/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddemydov <ddemydov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 20:19:10 by ddemydov          #+#    #+#             */
/*   Updated: 2023/07/29 20:19:12 by ddemydov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	check_type(const char *s, va_list args, int i)
{
	int	len;

	len = 0;
	if (s[i] == 'c')
		len += ft_printchar(va_arg(args, int));
	if (s[i] == 's')
		len += ft_printstr(va_arg(args, char *));
	if (s[i] == 'p')
	{
		ft_printstr("0x");
		len = 2;
		len += ft_putpointer(va_arg(args, unsigned long long));
	}
	if (s[i] == 'd' || s[i] == 'i')
		len += ft_putnbr(va_arg(args, int));
	if (s[i] == 'u')
		len += ft_print_unsdec(va_arg(args, unsigned int));
	if (s[i] == 'x')
		len += ft_printhexa_low(va_arg(args, unsigned int));
	if (s[i] == 'X')
		len += ft_printhexa_up(va_arg(args, unsigned int));
	if (s[i] == '%')
		len += ft_printchar('%');
	return (len);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		len;
	va_list	args;

	i = 0;
	len = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] != '%')
		{
			write(1, &format[i], 1);
			len++;
			i++;
		}
		else
		{
			len += check_type(format, args, i + 1);
			i += 2;
		}
	}
	va_end(args);
	return (len);
}
