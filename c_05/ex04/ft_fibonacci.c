/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsequeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 20:14:01 by bsequeir          #+#    #+#             */
/*   Updated: 2023/03/20 20:15:23 by bsequeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	fib;

	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	fib = ft_fibonacci(index - 2) + ft_fibonacci(index - 1);
	return (fib);
}

#include <stdio.h>

int main(void)
{
    int index = 10;
    printf("%d\n", ft_fibonacci(index));
}
