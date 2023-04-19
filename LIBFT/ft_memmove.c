/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsequeir <bsequeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 20:33:06 by bsequeir          #+#    #+#             */
/*   Updated: 2023/04/18 20:36:37 by bsequeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

static void	move(unsigned const char *a, unsigned char *d, size_t n)
{
	size_t	i;

	if (d > a)
	{
		i = n - 1;
		while (i < n)
		{
			d[i] = a[i];
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			d[i] = a[i];
			i++;
		}
	}
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned const char	*a;
	unsigned char		*d;

	a = (unsigned const char *)src;
	d = (unsigned char *)dest;
	if (d == a)
		return (d);
	move(a, d, n);
	return (dest);
}

/*#include <stdio.h>
#include <string.h>

int main(void) 
{
   char dest1[] = "oldstring1";
   char dest2[] = "oldstring2";
   const char src1[]  = "newstring";
   const char src2[]  = "newstring";

   printf("1 Before memmove dest = %s, src = %s\n", dest1, src1);
   printf("2 Before memmove dest = %s, src = %s\n", dest2, src2);
   memmove(dest1, src1, 9);
   ft_memmove(dest2, src2, 9);
   printf("1 After memmove dest = %s, src = %s\n", dest1, src1);
   printf("2 After memmove dest = %s, src = %s\n", dest2, src2);

   return(0);
}*/
