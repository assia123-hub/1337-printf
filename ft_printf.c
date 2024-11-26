/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschalh <aschalh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 15:21:23 by aschalh           #+#    #+#             */
/*   Updated: 2024/11/26 20:56:34 by aschalh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <unistd.h>

int	ft_printf(const char *format, ...)
{
	int		i;
	int		y;
	va_list	args;

	if (!format)
		return (-1);
	va_start(args, format);
	i = 0;
	y = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'i' || format[i] == 'd')
				y += ft_putnbr(va_arg(args, int));
			else if (format[i] == 'c')
				y += ft_putchar(va_arg(args, int));
			else if (format[i] == 's')
				y += ft_putstr(va_arg(args, char *));
			else if (format[i] == 'u')
				y += ft_putunbr(va_arg(args, unsigned int));
			else if (format[i] == 'x')
				y += ft_hexadecimal(va_arg(args, unsigned int),
						"0123456789abcdef");
			else if (format[i] == 'X')
				y += ft_hexadecimal(va_arg(args, unsigned int),
						"0123456789ABCDEF");
			else if (format[i] == '%')
				y += ft_putchar('%');
			else if (format[i] == 'p')
				y += ft_putadress(va_arg(args, void *));
			else
				y += ft_putchar(format[i]);
		}
		else
		{
			y += ft_putchar(format[i]);
		}
		i++;
	}
	va_end(args);
	return (y);
}
