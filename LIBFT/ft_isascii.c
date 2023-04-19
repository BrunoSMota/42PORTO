/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsequeir <bsequeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 18:31:42 by bsequeir          #+#    #+#             */
/*   Updated: 2023/04/18 21:19:23 by bsequeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int arg)
{
	if ((arg <= 127) && (arg >= 0))
		return (1);
	else
		return (0);
}

/*#include<stdio.h>
#include<ctype.h>
int main()
{
    char val='a';

    printf("%d\n", isascii(val));
    printf("%d\n", ft_isascii(val));
  return 0;
}*/
