/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_pct.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 21:53:12 by aminoru-          #+#    #+#             */
/*   Updated: 2022/05/29 22:04:50 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_convert_pct(t_holder *h)
{
	h->argument = ft_appendchr("", h->conversion)
	if (!h->left_justify)
		ft_fill_left_pad(&h->argument, h->padding, h->width);
	else
		ft_fill_rigth_pad(&h->argument, SPACE, h->width);
	h->len = ft_strlen(h->argument);
}
