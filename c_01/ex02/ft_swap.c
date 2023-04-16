/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsequeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 17:28:51 by bsequeir          #+#    #+#             */
/*   Updated: 2023/03/13 17:33:16 by bsequeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

/*#include <stdio.h>

int main(void)
{
	int		a;
	int		b;
	int		*ptra;
	int		*ptrb;
	a = 1;
	b = 2;
	ptra = &a;
	ptrb = &b;
	ft_swap(ptra, ptrb);
	printf("a : %d, b : %d\n", a, b);
}*/
