/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsequeir <bsequeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 19:23:29 by bsequeir          #+#    #+#             */
/*   Updated: 2023/04/27 22:28:51 by bsequeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "ft_printf.h"

void	writepointer(unsigned long point)
{
	if (point >= 16)
		writepointer(point / 16);
	ft_putchar_fd("0123456789abcdef"[point % 16], 1);
}

int	ft_putpointer(unsigned long point)
{
	int	i;

	if (point != 0)
	{
		i = 2;
		write(1, "0x", 2);
		writepointer(point);
		while (point > 0)
		{
			point /= 16;
			i++;
		}
		return (i);
	}
	else
	{
		write(1, "(nil)", 5);
		return (5);
	}
}

/*int main(void)
{
    unsigned long i = -1;
    int j;

    j = ft_putpointer(i);
    printf("\nprintf -> %p", (void *)i);
    printf("\ntot -> %d\n", j);
}*/
