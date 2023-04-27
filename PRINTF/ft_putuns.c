/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuns.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsequeir <bsequeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 14:56:14 by bsequeir          #+#    #+#             */
/*   Updated: 2023/04/27 17:02:57 by bsequeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "ft_printf.h"

int	ft_putuns(unsigned int u)
{
	static int	i;

	i = 0;
	if (u > 9)
		ft_putuns(u / 10);
	i++;
	ft_putchar_fd("0123456789"[u % 10], 1);
	return (i);
}

/*int main(void)
{
    int i = 389, j;

    j = ft_putuns(i);
    printf("\ntot -> %d\n", j);
}*/
