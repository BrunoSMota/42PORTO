/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsequeir <bsequeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 17:42:53 by bsequeir          #+#    #+#             */
/*   Updated: 2023/04/18 21:11:22 by bsequeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (little[0] == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] != '\0')
	{
		j = 0;
		if (big[i] == little[j])
		{
			while (big[i + j] != '\0' && little[j] != '\0'
				&& (i + j) < len && big[i + j] == little[j])
			{
				j++;
				if (little[j] == '\0')
				{
					return ((char *)(big + i));
				}
			}
		}
		i++;
	}
	return (0);
}

/*#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{

    char    *s1 = "casa amarela";
    char    *s2 = "casa";
    size_t  max = 4;

    char    *i2 = ft_strnstr(s1, s2, max);


    printf("ft_strnstr: %s\n", i2);
    return 0;
}*/
