/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschalh <aschalh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 15:21:23 by aschalh           #+#    #+#             */
/*   Updated: 2024/11/30 18:46:40 by aschalh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	check_num(char assia, va_list args)
{
	int	y;

	y = 0;
	if (assia == 'i' || assia == 'd')
		y += ft_putnbr(va_arg(args, int));
	else if (assia == 'c')
		y += ft_putchar(va_arg(args, int));
	else if (assia == 'u')
		y += ft_putunbr(va_arg(args, unsigned int));
	else if (assia == 'x')
		y += ft_hexa_upper(va_arg(args, unsigned int), "0123456789abcdef");
	else if (assia == 'X')
		y += ft_hexa_lower(va_arg(args, unsigned int), "0123456789ABCDEF");
	else if (assia == '%')
		y += ft_putchar('%');
	return (y);
}
static void	norm(char *ptr, int *y)
{
	if (ptr == NULL)
		*y += ft_putstr("(nil)");
	else
	{
		*y += ft_putstr("0x");
		*y += ft_hexa_upper((unsigned long)ptr, "0123456789abcdef");
	}
}

static int	check_string(char assia, va_list args)
{
	int		y;
	char	*s;
	char	*ptr;

	y = 0;
	if (assia == 's')
	{
		s = va_arg(args, char *);
		if (s == NULL)
			y += ft_putstr("(null)");
		else
			y += ft_putstr(s);
	}
	else if (assia == 'p')
	{
		ptr = va_arg(args, void *);
		norm(ptr, &y);
	}
	else
		y += ft_putchar(assia);
	return (y);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		y;
	int		tmp;
	va_list	args;

	va_start(args, format);
	i = 0;
	y = 0;
	if (format == NULL)
	    return (-1);
	while (format[i])
	{
		if (format[i] == '%')
		{
			tmp = check_num(format[++i], args);
			if (tmp == 0)
				tmp = check_string(format[i], args);
			y += tmp;
		}
		else
			y += ft_putchar(format[i]);
	  i++;
	}
	va_end(args);
	return (y);
}
