/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsequeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 16:16:12 by bsequeir          #+#    #+#             */
/*   Updated: 2023/03/20 16:18:23 by bsequeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	retorno;

	retorno = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		retorno = retorno * nb;
		nb--;
	}
	return (retorno);
}

/*#include <stdio.h>

int	main(void)
{
    int nb = 3;

    printf("%d\n", ft_iterative_factorial(nb));
}*/
