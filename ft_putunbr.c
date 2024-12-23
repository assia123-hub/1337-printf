/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschalh <aschalh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 15:25:14 by aschalh           #+#    #+#             */
/*   Updated: 2024/11/26 19:55:17 by aschalh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbr(unsigned int n)
{
	int	i;

	i = 0;
	if (n > 9)
	{
		i += ft_putunbr(n / 10);
		i += ft_putchar(n % 10 + '0');
	}
	else
	{
		i += ft_putchar(n + '0');
	}
	return (i);
}
