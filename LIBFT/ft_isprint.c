/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsequeir <bsequeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 18:31:36 by bsequeir          #+#    #+#             */
/*   Updated: 2023/04/18 19:45:08 by bsequeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int arg)
{
	if (arg > 31 && arg < 127)
		return (1);
	else
		return (0);
}

/*#include <ctype.h>
#include <stdio.h>

int main()
{
    char c;

    c = 'Q';
    printf("Result when a printable character %c
	is passed to isprint(): %d\n", c, isprint(c));
    printf("Result when a printable character %c
	is passed to isprint(): %d\n", c, ft_isprint(c));
    c = '\n';
    printf("Result when a control character %c 
	is passed to isprint(): %d\n", c, isprint(c));
    printf("Result when a control character %c
	is passed to isprint(): %d\n", c, ft_isprint(c));

    return 0;
}*/
