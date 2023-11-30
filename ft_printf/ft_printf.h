/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddemydov <ddemydov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 20:19:05 by ddemydov          #+#    #+#             */
/*   Updated: 2023/07/29 20:19:07 by ddemydov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *s, ...);
int	ft_putnbr(int n);
int	ft_printstr(const char *s);
int	ft_printchar(char c);
int	ft_putpointer(unsigned long long n);
int	ft_print_unsdec(unsigned int n);
int	ft_printhexa_up(unsigned int n);
int	ft_printhexa_low(unsigned int n);

#endif
