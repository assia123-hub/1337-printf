/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschalh <aschalh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 15:26:21 by aschalh           #+#    #+#             */
/*   Updated: 2024/11/27 11:28:55 by aschalh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdio.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_hexa_lower(unsigned long nb, char *hexa);
int	ft_hexa_upper(unsigned long nb, char *hexa);
int	ft_putunbr(unsigned int n);
int	ft_putstr(char *s);
int	ft_putnbr(int n);
int	ft_putchar(char c);

#endif
