/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_maxhex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsequeir <bsequeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 15:59:54 by bsequeir          #+#    #+#             */
/*   Updated: 2023/04/27 19:07:57 by bsequeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "ft_printf.h"

int	ft_maxhex(unsigned int hmax)
{
	static int	i;

	i = 0;
	if (hmax == 0)
		return (write(1, "0", 1));
	if (hmax >= 16)
		ft_maxhex(hmax / 16);
	i++;
	ft_putchar_fd("0123456789ABCDEF"[hmax % 16], 1);
	return (i);
}

/*int main(void)
{
    int i = 389367;
    int j;

    j = ft_maxhex(i);
    printf("\nprintf -> %X", i);
    printf("\ntot -> %d\n", j);
}*/
