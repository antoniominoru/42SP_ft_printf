/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 01:13:39 by aminoru-          #+#    #+#             */
/*   Updated: 2022/05/07 00:50:25 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	ch;

	ch = (unsigned char)c;
	if (!s) // add
		return (0);  // add
	while (*s != '\0' && ch != *s)
		s++;
	if (ch == *s)
		return ((char *)s);
	return (0);
}
