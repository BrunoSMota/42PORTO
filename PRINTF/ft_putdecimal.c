/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdecimal.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsequeir <bsequeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 17:11:47 by bsequeir          #+#    #+#             */
/*   Updated: 2023/04/27 18:30:36 by bsequeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_printf.h"
#include <stdio.h>

int	ft_putdecimal(int number, int fd)
{
	int	count;

	count = 0;
	if (number == 0)
		return (write(fd, "0", 1));
	if (number == -2147483648)
		return (ft_putstr("-2147483648"));
	if (number < 0)
	{
		count = count + write(fd, "-", 1);
		number *= -1;
	}
	if (number < 10)
	{
		ft_putchar_fd(number + '0', fd);
		count++;
	}
	else
	{
		count += ft_putdecimal((number / 10), fd);
		ft_putchar_fd((number % 10) + '0', fd);
		count++;
	}
	return (count);
}

/*int main(void)
{
    int a = -10, b, c = 1234;
    b = ft_putdecimal(a, 1);
    printf("\ntot -> %d\n", b);
	printf("x -> %x\n", c);
}*/
