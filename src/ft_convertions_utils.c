/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convertions_utils.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 22:05:18 by aminoru-          #+#    #+#             */
/*   Updated: 2022/05/31 20:43:54 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	ft_prefix_ux(t_holder *h)
{
	char	*tmp;

	tmp = h->argument;
	if (ft_strchr(h->prefix, '#'))
	{
		if (h->specifier == 'x')
			h->argument = ft_strjoin(PREFIX_HEX_L, tmp);
		if (h->specifier == 'X')
			h->argument = ft_strjoin(PREFIX_HEX_U, tmp);
		if (h->specifier == 'o')
			h->argument = ft_strjoin(PREFIX_OCTAL, tmp);
		free(temp);
	}
}

void	ft_add_prefix(t_holder *h, int sign)
{
	int	len;

	len = ft_strlen(h->argument);
	if (h->specifier == 'd' || h->specifier == 'i')
	{
		len += 1;
		if (ft_strchr(h->prefix, PLUS) && sign == 1)
			ft_fill_left_pad(&h->argument, PLUS, len);
		else if (ft_strchr(h->prefix, SPACE) && sign == 1)
			ft_fill_left_pad(&h->argument, SPACE, len);
		else if (sign == -1)
			ft_fill_left_pad(&h->argument, MINUS, len);
	}
	else if (h->specifier == 'x')
		ft_prefix_ux(h);
	else if (h->specifier == 'X')
		ft_prefix_ux(h);
	else if (h->specifier == 'o')
		ft_prefix_ux(h);
}

void	ft_fill_left_pad(char **src, char padding, int width)
{
	char	*tmp;
	int		len;

	len = ft_strlen(*src);
	if (!width || width < len)
		width = len;
	tmp = malloc(width * sizeof(char));
	if (!tmp)
		return ;
	ft_memset(tmp, padding, (width - len));
	tmp[(width - len)] = '\0';
	ft_strlcat(tmp, *src, width + 1);
	free(*src);
	*src = tmp;
}

void	ft_fill_right_pad(char **src, char padding, int width)
{
	char	*tmp;
	int		len;

	len = ft_strlen(*src);
	if (!width || width < len)
		width = len;
	tmp = malloc(width * sizeof(char));
	if (!tmp)
		return ;
	ft_strlcpy(tmp, *src, len +1);
	ft_memset(&tmp[len], padding, (width - len));
	tmp[width] = '\0';
	free(*src);
	*src = tmp;
}
