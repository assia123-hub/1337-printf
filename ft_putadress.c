/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadress.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschalh <aschalh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 20:06:37 by aschalh           #+#    #+#             */
/*   Updated: 2024/11/26 21:13:45 by aschalh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putadress(void *str)
{
	unsigned long long	adress;
	int					i;

	adress = (unsigned long long)str;
	i = 0;
	i += ft_putstr("0x");
	if (adress == 0)
		i += ft_putchar('0');
	else
		i += ft_hexadecimal(adress, "0123456789abcdef");
	return (i);
}
