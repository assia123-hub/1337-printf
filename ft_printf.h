/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschalh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 15:26:21 by aschalh           #+#    #+#             */
/*   Updated: 2024/11/26 15:26:40 by aschalh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

int ft_printf(const char *format, ...);
int ft_hexadecimal(unsigned int n);
int ft_putunbr(unsigned int n);
int ft_putstr(char *s);
int ft_putnbr(int n);
int ft_putchar(char c);

#endif
