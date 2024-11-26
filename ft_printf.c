/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschalh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 15:21:23 by aschalh           #+#    #+#             */
/*   Updated: 2024/11/26 15:28:26 by aschalh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

int ft_printf(const char *format, ...)
{
        int i = 0;
        int y = 0;
        va_list args;
        if (!format)
                return (-1);
        va_start(args, format);

        while (format[i])
        {
                if (format[0] == '%')
                {
                        if (format[i] == 'i' || format[i] == 'd')
                                y += ft_putnbr(va_arg(args, int));
                        else if (format[i] == 'c')
                                y += ft_putchar(va_arg(args, int));
                        else if (format[i] == 's')
                                y += ft_putstr(va_arg(args, char *));
                        else if (format[i] == 'u')
                                y += ft_putunbr(va_arg(args, unsigned int));
                        else if (format[i] == 'x')
                                y += ft_hexadecimal(va_arg(args, unsigned int));
                        else if (format[i] == 'X')
                                y += ft_hexadecimal(va_arg(args, unsigned int));
                        else if (format[i] == '%')
                                y += ft_putchar('%');
                        else
                                y += ft_putchar('%');
                        y += ft_putchar(format[i]);
                }
                i++;
        }
        return (y);
        va_end(args);
}
