/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsequeir <bsequeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 17:30:54 by bsequeir          #+#    #+#             */
/*   Updated: 2023/04/18 21:20:12 by bsequeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int ch)
{
	if (ch > 96 && ch < 123)
	{
		ch = ch - 32;
	}
	return (ch);
}

/*#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char c;

    c = 'm';
    printf("%c -> %c\n", c, toupper(c));
    printf("%c -> %c\n", c, ft_toupper(c));

    c = 'D';
    printf("%c -> %c\n", c, toupper(c));
    printf("%c -> %c\n", c, ft_toupper(c));

    c = '9';
    printf("%c -> %c\n", c, toupper(c));
    printf("%c -> %c\n", c, ft_toupper(c));
    return 0;
}*/
