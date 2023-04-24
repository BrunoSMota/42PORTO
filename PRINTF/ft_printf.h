/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsequeir <bsequeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 15:39:29 by bsequeir          #+#    #+#             */
/*   Updated: 2023/04/24 19:34:35 by bsequeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include "LIBFT/libft.h"

int ft_printf(const char *, ...);

int ft_putstr_fdp(char *s, int fd);

#endif