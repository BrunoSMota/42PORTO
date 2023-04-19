/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsequeir <bsequeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 18:32:00 by bsequeir          #+#    #+#             */
/*   Updated: 2023/04/18 21:25:00 by bsequeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int argument)
{
	if (argument > 64 && argument < 91)
		return (1);
	else if (argument > 96 && argument < 123)
		return (2);
	else
		return (0);
}

/*#include <stdio.h>
#include <ctype.h>
int main(void)
{
    char c;
    c = 'Q';
    printf("Result when uppercase alphabet is passed: %d", isalpha(c));
    printf("\nResult when uppercase alphabet is passed: %d", ft_isalpha(c));

    c = 'q';
    printf("\nResult when lowercase alphabet is passed: %d", isalpha(c));
    printf("\nResult when lowercase alphabet is passed: %d", ft_isalpha(c));

    c='+';
    printf("\nResult when non-alphabetic character is passed: %d", isalpha(c));
    printf("\nResult when non-alphabetic character is passed: %d\n",
   	 ft_isalpha(c));
    

    return 0;
}*/
