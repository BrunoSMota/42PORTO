/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsequeir <bsequeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 17:30:37 by bsequeir          #+#    #+#             */
/*   Updated: 2023/04/18 19:47:42 by bsequeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int ch)
{
	if (ch > 64 && ch < 91)
	{
		ch = ch + 32;
	}
	return (ch);
}

/*#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char c;

    c = 'M';
    printf("%c -> %c\n", c, tolower(c));
    printf("%c -> %c\n", c, ft_tolower(c));

    c = 'D';
    printf("%c -> %c\n", c, tolower(c));
    printf("%c -> %c\n", c, ft_tolower(c));

    c = '9';
    printf("%c -> %c\n", c, tolower(c));
    printf("%c -> %c\n", c, ft_tolower(c));
    return 0;
}*/
