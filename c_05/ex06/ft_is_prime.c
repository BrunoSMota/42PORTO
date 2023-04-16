/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsequeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 21:06:54 by bsequeir          #+#    #+#             */
/*   Updated: 2023/03/21 23:08:55 by bsequeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	i = 2;
	while (nb % i != 0 && i <= 46340 && i * i < nb)
		i++;
	if (nb % i == 0 && i * i <= nb)
		return (0);
	return (1);
}

/*#include <stdio.h>

int main(void)
{
    int nb = 4;
    printf("%d\n", ft_is_prime(nb));
}*/
