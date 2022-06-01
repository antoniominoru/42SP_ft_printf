/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_p.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 20:49:29 by aminoru-          #+#    #+#             */
/*   Updated: 2022/06/02 00:55:24 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*ft_nullset(t_holder *h)
{
	char *number;

	if (h->precision > -1)
	{
		number = malloc((h->precision + 1) * sizeof(char));
		if (!number)
			return (NULL);
		ft_memset(number, '0', (size_t)h->precision);
		number[h->precision] = '\0';
	}
	else
		number = ft_strdup("0");
	return (number);
}

void	ft_convert_p(t_format *fmt, t_holder *h)
{
	void	*ptr;
	char	*number;

	number = NULL;
	ptr = va_arg(fmt->ap, void *);
	if (!ptr)
		number = ft_nullset(h);	
	else
		number = ft_uitoa((unsigned long)ptr, HEXADECIMAL_L_BASE);
	h->argument = ft_strjoin(PREFIX_HEX_L, number);
	free(number);
	if (!h->left_justify)
		ft_fill_left_pad(&h->argument, SPACE, h->width);
	else
		ft_fill_right_pad(&h->argument, SPACE, h->width);
	h->len = ft_strlen(h->argument);
}
