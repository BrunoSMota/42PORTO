/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsequeir <bsequeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 22:27:44 by bsequeir          #+#    #+#             */
/*   Updated: 2023/04/18 20:46:49 by bsequeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*a;
	size_t	b;

	b = nitems * size;
	a = malloc(b);
	if (a == NULL)
		return (NULL);
	ft_bzero(a, b);
	return (a);
}

/*#include <stdio.h>

int main(void)
{
    int i, n = 4;
    int *a, *b;

    a = (int*)calloc(n, sizeof(int));
    i = 0; 
    while(i < n)
    {
        printf("%d\n",a[i]);
        i++;
    }
    printf("\n");
    b = (int*)ft_calloc(n, sizeof(int));
    i = 0; 
    while(i < n)
    {
        printf("%d\n",b[i]);
        i++;
    }
   free(a);
   free(b);
   return(0);
}*/
