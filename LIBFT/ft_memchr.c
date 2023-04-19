/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsequeir <bsequeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 15:13:33 by bsequeir          #+#    #+#             */
/*   Updated: 2023/04/18 20:44:55 by bsequeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*b;

	i = 0;
	b = (void *)str;
	while (i < n)
	{
		if (b[i] == (unsigned char)c)
			return (&b[i]);
		i++;
	}
	return (NULL);
}
/*#include <stdio.h>
#include <string.h>

int main(void)
{
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = '.';
   char *ret1;
   char *ret2;

   ret1 = memchr(str, ch, strlen(str));
   ret2 = memchr(str, ch, strlen(str));

   printf("1 String after |%c| is - |%s|\n", ch, ret1);
   printf("2 String after |%c| is - |%s|\n", ch, ret2);

   return(0);
}*/
