/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inicialize.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 15:34:36 by aminoru-          #+#    #+#             */
/*   Updated: 2022/05/28 14:28:19 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

t_format	*ft_inicialize_stdout(const char *format, va_list ap)
{
	t_format	*start;

	start = malloc(sizeof(t_format));
	if (!start)
		return (NULL);
	start->format = format;
	va_copy(start->ap, ap);
	start->i = 0;
	start->len = 0;
	return (start);
}

t_holder	*ft_inicialize_placeholder(void)
{
	t_holder	*holder;

	holder = malloc(sizeof(t_holder));
	if (!holder)
		return (NULL);
	holder->left_justify = 0;
	holder->width = 0;
	holder->precision = -1;
	holder->padding = ' ';
	holder->conversion = '\0';
	holder->*argument = NULL;
	holder->*prefix = ft_strup("");
	holder->len = 0;
	return (holder);
}
