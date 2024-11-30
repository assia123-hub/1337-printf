/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschalh <aschalh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:47:40 by aschalh           #+#    #+#             */
/*   Updated: 2024/11/30 18:14:20 by aschalh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <stdarg.h>
#include "ft_printf.h"

int	main(void)
{
    int *i = 42;
	printf("\n---------------------------\n");
	printf("Hello, %s!\n", "world");
	printf("Null string: %s\n", NULL);
	printf("Integer: %d\n", 42);
	printf("Character: %c\n", 'A');
	printf("Unsigned: %u\n", 123456);
	printf("Hex lowercase: %x\n", -1);
	printf("Hex uppercase: %X\n", -1);
	printf("Pointer: %p\n", i);
	printf("Null pointer: %p\n", NULL);
	printf("Percent sign: %%\n");
    printf(NULL);
    printf("\n----------------------------------\n");
    ft_printf("Hello, %s!\n", "world");
	ft_printf("Null string: %s\n", NULL);
	ft_printf("Integer: %d\n", 42);
	ft_printf("Character: %c\n", 'A');
	ft_printf("Unsigned: %u\n", 123456);
	ft_printf("Hex lowercase: %x\n", -1);
	ft_printf("Hex uppercase: %X\n", -1);
	ft_printf("Pointer: %p\n", i);
	ft_printf("Null pointer: %p\n", NULL);
	ft_printf("Percent sign: %%\n");
    ft_printf(NULL);
}
