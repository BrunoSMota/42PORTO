/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsequeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 19:04:28 by bsequeir          #+#    #+#             */
/*   Updated: 2023/03/13 19:05:33 by bsequeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;
	int	d;

	c = *a;
	d = *b;
	*a = c / d;
	*b = c % d;
}

/*int main(void)
{
    int *a;
    int *b;
    int c;
    int d;

    c = 40;
    d = 2;
    a = &c;
    b = &d;
    printf("%d\n", c);
    printf("%d", d);
    printf("\n");
    ft_ultimate_div_mod(a, b);
    printf("%d\n", c);
    printf("%d", d);
}*/
