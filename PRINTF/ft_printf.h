/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsequeir <bsequeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 15:39:29 by bsequeir          #+#    #+#             */
/*   Updated: 2023/04/27 22:27:16 by bsequeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include "LIBFT/libft.h"
# include <stdarg.h>

int	ft_printf(const char *format, ...);

int	ft_putstr(char *s);

int	ft_putchar(char c);

int	ft_putdecimal(int n, int fd);

int	ft_putuns(unsigned int u);

int	ft_minhex(unsigned int hmin);

int	ft_maxhex(unsigned int hmax);

int	ft_putpointer(unsigned long point);

#endif
