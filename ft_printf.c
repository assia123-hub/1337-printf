/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschalh <aschalh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 15:21:23 by aschalh           #+#    #+#             */
/*   Updated: 2024/11/27 11:45:16 by aschalh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

static int	check(char assia, va_list args)
{
	int	y;

	y = 0;
	if (assia == 'i' || assia == 'd')
		y += ft_putnbr(va_arg(args, int));
	else if (assia == 'c')
		y += ft_putchar(va_arg(args, int));
	else if (assia == 's')
		y += ft_putstr(va_arg(args, char *));
	else if (assia == 'u')
		y += ft_putunbr(va_arg(args, unsigned int));
	else if (assia == 'x')
		y += ft_hexa_upper(va_arg(args, unsigned int), "0123456789abcdef");
	else if (assia == 'X')
		y += ft_hexa_lower(va_arg(args, unsigned int), "0123456789ABCDEF");
	else if (assia == '%')
		y += ft_putchar('%');
	else if (assia == 'p')
	{
		y += ft_putstr("0x");
		y += ft_hexa_upper(va_arg(args, unsigned long), "0123456789abcdef");
	}
	else
		y += ft_putchar(assia);
	return (y);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		y;
	va_list	args;

	va_start(args, format);
	i = 0;
	y = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			y += check(format[i], args);
		}
		else
			y += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (y);
}
int	main(void)
{
	ft_printf("Hello, %s!\n", "world");
	ft_printf("Null string: %s\n", NULL);
	ft_printf("Integer: %d\n", 42);
	ft_printf("Character: %c\n", 'A');
	ft_printf("Unsigned: %u\n", 123456);
	ft_printf("Hex lowercase: %x\n", 255);
	ft_printf("Hex uppercase: %X\n", 255);
	ft_printf("Pointer: %p\n", (void *)main);
	ft_printf("Null pointer: %p\n", NULL);
	ft_printf("Percent sign: %%\n");
	printf("\n---------------------------\n");
	printf("Hello, %s!\n", "world");
	printf("Null string: %s\n", NULL);
	printf("Integer: %d\n", 42);
	printf("Character: %c\n", 'A');
	printf("Unsigned: %u\n", 123456);
	printf("Hex lowercase: %x\n", 255);
	printf("Hex uppercase: %X\n", 255);
	printf("Pointer: %p\n", (void *)main);
	printf("Null pointer: %p\n", NULL);
	printf("Percent sign: %%\n");
}
