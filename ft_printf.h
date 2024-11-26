/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschalh <aschalh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 15:26:21 by aschalh           #+#    #+#             */
/*   Updated: 2024/11/26 20:54:52 by aschalh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_hexadecimal(unsigned int n, const char *hexa);
int	ft_putunbr(unsigned int n);
int	ft_putstr(char *s);
int	ft_putnbr(int n);
int	ft_putchar(char c);
int	ft_putadress(void *str);

#endif
