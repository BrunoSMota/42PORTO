/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsequeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 16:18:43 by bsequeir          #+#    #+#             */
/*   Updated: 2023/03/20 16:20:14 by bsequeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	retorno;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	else
	{
		retorno = nb * ft_recursive_factorial(nb - 1);
		return (retorno);
	}
}

/*#include <stdio.h>

int	main(void)
{
    int nb = 1;

    printf("%d\n", ft_recursive_factorial(nb));
}*/
