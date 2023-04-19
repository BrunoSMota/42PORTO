/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsequeir <bsequeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 22:07:40 by bsequeir          #+#    #+#             */
/*   Updated: 2023/04/18 21:18:35 by bsequeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t		dest_size;
	size_t		src_size;
	size_t		i;
	size_t		j;

	src_size = ft_strlen(src);
	dest_size = ft_strlen(dest);
	if (dest_size < (size - 1) && size > 0)
	{
		i = 0;
		j = dest_size;
		while (src[i] != '\0' && i < size - dest_size - 1)
		{
			dest[j] = src[i];
			i++;
			j++;
		}
		dest[j] = '\0';
	}
	if (dest_size > size)
	{
		dest_size = size;
	}
	return (dest_size + src_size);
}

/*#include <stdio.h>
#include <string.h>

int main(void)
{
    char first[] = "This is ";
    char last[] = "a potentially long string";
    int r1;
    int r2;
    int size = 50;
    char buffer1[size];
    char buffer2[size];

    strcpy(buffer1,first);
    strcpy(buffer2,first);
    r1 = strlcat(buffer1,last,size);
    r2 = strlcat(buffer2,last,size);

    printf("1 %s\n", buffer1);
    printf("2 %s\n", buffer2);
    printf("1 Value returned: %d\n",r1);
    printf("2 Value returned: %d\n",r2);
    if( r1 > size )
        puts("String truncated");
    else
        puts("String was fully copied");

    return(0);
}*/
