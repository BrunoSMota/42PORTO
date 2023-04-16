/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsequeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 21:21:42 by bsequeir          #+#    #+#             */
/*   Updated: 2023/03/20 21:23:22 by bsequeir         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		nb = 2;
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}

/*#include <stdio.h>

int main(void)
{
    int nb = -100;
    printf("%d\n", ft_find_next_prime(nb));
}*/