/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_upper.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschalh <aschalh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 15:23:20 by aschalh           #+#    #+#             */
/*   Updated: 2024/11/27 10:13:19 by aschalh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexa_upper(unsigned long nb, char *hexa)
{
	int	i;

	i = 0;
	hexa = "0123456789abcdef";
	if (nb >= 16)
	{
		i += ft_hexa_upper(nb / 16, hexa);
		i += ft_hexa_upper(nb % 16, hexa);
	}
	else
	{
		i += ft_putchar(hexa[nb % 16]);
	}
	return (i);
}
