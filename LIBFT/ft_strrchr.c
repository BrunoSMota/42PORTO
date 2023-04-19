/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsequeir <bsequeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 14:49:47 by bsequeir          #+#    #+#             */
/*   Updated: 2023/04/18 20:38:16 by bsequeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen(str);
	while (i > -1)
	{
		if (str[i] == (unsigned char)c)
			return (&((char *)str)[i]);
		i--;
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>

int main () 
{
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = '.';
   char *ret1;
   char *ret2;

   ret1 = strrchr(str, ch);
   ret2 = ft_strrchr(str, ch);

   printf("1 String after |%c| is - |%s|\n", ch, ret1);
   printf("2 String after |%c| is - |%s|\n", ch, ret2);
   
   return(0);
}*/
