/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_minhex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsequeir <bsequeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 15:28:34 by bsequeir          #+#    #+#             */
/*   Updated: 2023/04/27 19:12:45 by bsequeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "ft_printf.h"

int	ft_minhex(unsigned int hmin)
{
	static int	i;

	i = 0;
	if (hmin == 0)
		return (write(1, "0", 1));
	if (hmin >= 16)
		ft_minhex(hmin / 16);
	i++;
	ft_putchar_fd("0123456789abcdef"[hmin % 16], 1);
	return (i);
}

/*int main(void)
{
    int i = 389;
    int j;

    j = ft_minhex(i);
    printf("\nprintf -> %x", i);
    printf("\ntot -> %d\n", j);
}*/
