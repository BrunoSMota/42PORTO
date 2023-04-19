/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsequeir <bsequeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 18:31:20 by bsequeir          #+#    #+#             */
/*   Updated: 2023/04/18 20:59:48 by bsequeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int arg)
{
	if (arg > 47 && arg < 58)
		return (1);
	else
		return (0);
}

/*#include <stdio.h>
#include <ctype.h>

int main()
{
    char c;
    c='5';
    printf("Result when numeric character is passed: %d\n", isdigit(c));
    printf("Result when numeric character is passed: %d\n", ft_isdigit(c));

    c='+';
    printf("Result when non-numeric character is passed: %d\n", isdigit(c));
    printf("Result when non-numeric character is passed: %d\n", ft_isdigit(c));

    return 0;
}*/
