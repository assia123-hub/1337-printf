/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschalh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 15:23:47 by aschalh           #+#    #+#             */
/*   Updated: 2024/11/26 17:15:17 by aschalh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putnbr(int n)
{
	long num = n;
	int i = 0;
	if (num == -2147483648)
	{
		return (write(1, "-2147483648", 11));
	}
	else if (num >= 0 && num <= 9)
	{
		i += ft_putchar(num + '0');
	}
	else if (num > 9)
	{
		i += ft_putnbr(num / 10);
		i += ft_putchar(num % 10 + '0');
	}
	else if (num < 0)
	{
		write(1, "-", 1);
		num *= -1;
		i += ft_putnbr(num);
	}
	return (i);
}
