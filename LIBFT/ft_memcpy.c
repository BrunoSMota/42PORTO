/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsequeir <bsequeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 20:28:08 by bsequeir          #+#    #+#             */
/*   Updated: 2023/04/18 20:21:05 by bsequeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*d;
	const char	*s;

	i = 0;
	d = dest;
	s = src;
	if (src == NULL && dest == NULL)
		return (NULL);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

/*#include <stdio.h>
#include <string.h>

int main () {
   const char src1[50] = "http://www.tutorialspoint.com";
   const char src2[50] = "http://www.tutorialspoint.com";
   char dest1[50];
   char dest2[50];
   strcpy(dest1,"Heloooo!!");
   strcpy(dest2,"Heloooo!!");
   printf("Before memcpy dest1 = %s\n", dest1);
   printf("Before memcpy dest2 = %s\n", dest2);
   memcpy(dest1, src1, strlen(src1)+1);
   memcpy(dest2, src2, strlen(src2)+1);
   printf("After memcpy dest = %s\n", dest1);
   printf("After memcpy dest = %s\n", dest2);
   
   return(0);
}*/
