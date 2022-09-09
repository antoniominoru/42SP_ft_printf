/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 01:00:29 by aminoru-          #+#    #+#             */
/*   Updated: 2022/06/02 22:51:30 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/ft_printf.h"

int	main(void)
{
	ft_printf("Characters: %c %c \n", 'a', 65);
	ft_printf("Decimals: %d%% %.5d\n", 1977, 650);
	ft_printf("Preceding with blanks: %10d \n", 1977);
	ft_printf("Preceding with zeros: %010d \n", 1977);
	ft_printf("Some different radices: %d %x %X %o \n", 100, 100, 100, 100);
	ft_printf("Some different radices #: %#x %#X %#o \n", 100, 100, 100);
	ft_printf("Pointer %p \n", 0);
	ft_printf("Width trick: %*d \n", 5, 10);
	ft_printf("%s \n", "A string");
	return (0);
}
