/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschalh <aschalh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 15:23:20 by aschalh           #+#    #+#             */
/*   Updated: 2024/11/26 21:07:34 by aschalh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexadecimal(unsigned int n, const char *hexa)
{
	int	i;

	i = 0;
	if (n >= 16)
	{
		i += ft_hexadecimal(n / 16, hexa);
		i += ft_putchar(hexa[n % 16]);
	}
	return (i);
}
