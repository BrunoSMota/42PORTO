/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsequeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 20:43:04 by bsequeir          #+#    #+#             */
/*   Updated: 2023/03/21 23:06:28 by bsequeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	raiz;

	raiz = 0;
	if (nb <= 0)
		return (0);
	while (raiz * raiz <= nb && raiz <= 46340)
	{
		if (raiz * raiz == nb)
			return (raiz);
		raiz++;
	}
	return (0);
}

/*#include <stdio.h>

int main(void)
{
    int nb = 81;
    printf("%d\n", ft_sqrt(nb));
}*/
