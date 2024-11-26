/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschalh <aschalh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 15:23:47 by aschalh           #+#    #+#             */
/*   Updated: 2024/11/26 21:11:51 by aschalh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	long	num;
	int		i;

	num = n;
	i = 0;
	if (num < 0)
	{
		i += ft_putchar('-');
		num = -num;
	}
	if (num >= 10)
		i += ft_putnbr(num / 10);
	i += ft_putchar(num % 10 + '0');
	return (i);
}
