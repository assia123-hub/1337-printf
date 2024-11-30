/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_lower.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschalh <aschalh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 09:48:39 by aschalh           #+#    #+#             */
/*   Updated: 2024/11/30 15:55:52 by aschalh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexa_lower(unsigned long nb, char *hexa)
{
	int	i;

	i = 0;
	hexa = "0123456789ABCDEF";
	if (nb >= 16)
	{
		i += ft_hexa_lower(nb / 16, hexa);
		i += ft_hexa_lower(nb % 16, hexa);
	}
	else
	{
		i += ft_putchar(hexa[nb % 16]);
	}
	return (i);
}
