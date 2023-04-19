/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsequeir <bsequeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 15:01:31 by bsequeir          #+#    #+#             */
/*   Updated: 2023/04/18 20:49:50 by bsequeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t				i;
	unsigned const char	*a;
	unsigned const char	*b;

	a = (unsigned const char *)str1;
	b = (unsigned const char *)str2;
	i = 0;
	if (!(n))
		return (0);
	while (a[i] != '\0' && b[i] != '\0' && a[i] == b[i])
	{
		if (i < (n -1))
			i++;
		else
			return (0);
	}
	return (a[i] - b[i]);
}

/*#include <stdio.h>
#include <string.h>

int main ()
{
    char str1[15];
    char str2[15];

    strcpy(str1, "casa rosa");
    strcpy(str2, "casa ros");

    printf("1 -> %d\n", strncmp(str1, str2, 6));
    printf("2 -> %d\n", ft_strncmp(str1, str2, 6));
   
   return(0);
}*/
