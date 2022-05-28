/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_placeholder.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 15:48:44 by aminoru-          #+#    #+#             */
/*   Updated: 2022/05/28 15:08:36 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_placeholder(t_format *fmt)
{
	t_holder	*h;

	fmt->i++;
	h = ft_inicialize_placeholder();
	ft_format_specifiers(fmt, h);
	if (holder->conversion)
	{
		ft_type_conversion(fmt, h); //criar
		write(1, h->argument, h->len);
		fmt->len += h->len;
		free(h->prefix);
	}
	free(h->prefix);
	free(h);
}