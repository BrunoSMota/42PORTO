/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsequeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 17:31:10 by bsequeir          #+#    #+#             */
/*   Updated: 2023/03/21 23:05:54 by bsequeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	retorno;

	retorno = 1;
	if (nb == 1 || power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power > 0)
	{
		retorno = retorno * nb;
		power--;
	}
	return (retorno);
}

//#include <stdio.h>

/*int main(void)
{
    int nb = 2, power = 3;
    printf("%d\n", ft_iterative_power(nb, power));
}*/

/*void ft_iterative_power_test(int nb, int power)
{
	int res;

	res = ft_iterative_power(nb, power);
	printf(" nb = %d, power = %d, result: %d\n", nb, power, res);
}

int	main(void)
{
	int nb;
	int power;

	// testando potencias negativas(deve retornar 0)
	printf("[1] Potencias negativas(deve retornar 0)\n");
	nb = -4;
	while (nb <= 4)
	{
		power = -4;
		while (power < 0)
		{
			ft_iterative_power_test(nb, power);
			power++;
		}
		nb++;
	}
	// testando potencias 0(deve retornar 1)
	printf("[2] Potencias 0(deve retornar 1)\n");
	nb = -4;
	power = 0;
	while (nb <= 4)
	{
		ft_iterative_power_test(nb, power);
		nb++;
	}
	// testando potencias 0(deve retornar 1)
	printf("[3] Potencias positivas(deve retornar o numero elevado a potencia)\n");
	nb = -4;
	while (nb <= 4)
	{
		power = 1;
		while (power <= 4)
		{
			ft_iterative_power_test(nb, power);
			power++;
		}
		nb++;
	}
	return (0);
}*/
