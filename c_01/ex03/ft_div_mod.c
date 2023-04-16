/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsequeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 18:13:06 by bsequeir          #+#    #+#             */
/*   Updated: 2023/03/13 18:14:32 by bsequeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int main(void)
{
    int a;
    int b;
    int *div;
    int *mod;
    int c;
    int d;

    a = 4;
    b = 3;
    div = &c;
    mod  = &d;
    ft_div_mod(a, b, div, mod);
    printf("%d\n", c);
    printf("%d", d);
}*/
