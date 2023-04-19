/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsequeir <bsequeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 18:31:55 by bsequeir          #+#    #+#             */
/*   Updated: 2023/04/18 20:56:02 by bsequeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int arg)
{
	if ((arg > 47 && arg < 58) || (arg > 64 && arg < 91)
		|| (arg > 96 && arg < 123))
		return (1);
	else
		return (0);
}

/*#include <stdio.h>
#include <ctype.h>
int main()
{
    char c;
    int result1, result2;

    c = '5';
    result1 = isalnum(c);
    result2 = ft_isalnum(c);
    printf("When %c is passed, return value is %d\n", c, result1);
    printf("When %c is passed, return value is %d\n", c, result2);

    c = 'Q';
    result1 = isalnum(c);
    result2 = ft_isalnum(c);
    printf("When %c is passed, return value is %d\n", c, result1);
    printf("When %c is passed, return value is %d\n", c, result2);

    c = 'l';
    result1 = isalnum(c);
    result2 = ft_isalnum(c);
    printf("When %c is passed, return value is %d\n", c, result1);
    printf("When %c is passed, return value is %d\n", c, result2);

    c = '+';
    result1 = isalnum(c);
    result2 = ft_isalnum(c);
    printf("When %c is passed, return value is %d\n", c, result1);
    printf("When %c is passed, return value is %d\n", c, result2);

    return 0;
}*/
