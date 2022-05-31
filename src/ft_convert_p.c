/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_p.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 20:49:29 by aminoru-          #+#    #+#             */
/*   Updated: 2022/05/31 21:02:32 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_convert_p(t_format *fmt, t_holder *h)
{
	void	*ptr;
	char	*number;

	number = NULL;
	ptr = va_arg(fmt->ap, void *);
	if (!ptr)
		number = ft_nullset(h);
	else
		number = ft_uitoa((unsigned int)ptr, HEXADECIMAL_L_BASE);
	h->argument = ft_strjoin(PREFIX_HEX_L, number);
	free(number);
	if (!h->left_justify)
		ft_fill_left_pad(&h->argument, SPACE, h->width);
	else
		ft_fill_rigth_pad(&h->argument, SPACE, h->width);
	h->len = ft_strlen(h->argument);
}

static char	*ft_nullset(t_holder *h)
{
	if (h->precision > -1)
	{
		number = malloc((h->precision + 1) * sizeof(char));
		if (!number)
			return (NULL);
		ft_memset(number, '0', h->precision);
		number[h->precision] = '\0';
	}
	else
		number = ft_strdup("0");
	return (number);
}
