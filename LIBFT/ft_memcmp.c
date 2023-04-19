/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsequeir <bsequeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 17:33:20 by bsequeir          #+#    #+#             */
/*   Updated: 2023/04/18 21:14:00 by bsequeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t				i;
	unsigned const char	*a;
	unsigned const char	*b;

	i = 0;
	a = (unsigned const char *)str1;
	b = (unsigned const char *)str2;
	while (i < n)
	{
		if (a[i] > b[i])
			return (1);
		if (b[i] > a[i])
			return (-1);
		i++;
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>

int main () {

    char str1[15];
    char str2[15];

    memcpy(str1, "abcdef", 6);
    memcpy(str2, "ABCDEF", 6);

    printf("1 -> %d\n", memcmp(str1, str2, 5));
    printf("2 -> %d\n", ft_memcmp(str1, str2, 5));
   
   return(0);
}*/
