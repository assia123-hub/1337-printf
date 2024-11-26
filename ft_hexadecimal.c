/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschalh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 15:23:20 by aschalh           #+#    #+#             */
/*   Updated: 2024/11/26 15:23:35 by aschalh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_hexadecimal(unsigned int n)
{
    int i = 0;
    char *hexa_lower = "0123456789abcdef";
    char *hexa_upper = "0123456789ABCDEF";
    if (n >= 16)
    {
        i += ft_hexadecimal(n / 16);
        i += ft_hexadecimal(n % 16);
    }
    else
        i += ft_putchar(hexa_lower[n % 16]);
    i += ft_putchar(hexa_upper[n % 16]);
    return (i);
}
