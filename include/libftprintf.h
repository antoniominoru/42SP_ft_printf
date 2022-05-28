/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 21:10:53 by aminoru-          #+#    #+#             */
/*   Updated: 2022/05/28 15:08:45 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include "../libft/libft.h"

# define P_HOLDER_ALL "-0# +123456789*"
# define P_HOLDER_ALL_FLAGS "-0# +"
# define P_HOLDER_JUSTIFY '-'
# define P_HOLDER_LEFT_PADS '0'
# define P_HOLDER_STAR '*'
# define P_HOLDER_PRECISION '.'

typedef struct s_format
{
	const char	*format;
	va_list		ap;
	size_t		i;
	size_t		len;
}				t_format;

typedef struct s_holder
{
	int		left_justify;
	int		width;
	int		precision;
	char	padding;
	char	conversion;
	char	*argument;
	char	*prefix;
	size_t	len;
}				t_holder;

int	ft_printf(const char *, ...);
int	ft_vprintf(const char *format, va_list ap);

// Structs inicialization
t_format	*ft_inicialize_stdout(const char *format, va_list ap);
t_holder	*ft_inicialize_placeholder(void);

// Placeholder
void	ft_placeholder(t_format *fmt);
void	*ft_format_specifiers(t_format *fmt, t_holder *h);
void	ft_fs_flags(t_format *fmt, t_holder *h);
void	ft_fs_width(t_format *fmt, t_holder *h);
void	ft_fs_precision(t_format *fmt, t_holder *h);
void	ft_fs_conversion(t_format *fmt, t_holder *h);

// adicional function to LIBFT
char	*ft_appendchr(char const *s, char const ch);

//

#endif