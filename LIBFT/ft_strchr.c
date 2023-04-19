/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsequeir <bsequeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 22:46:04 by bsequeir          #+#    #+#             */
/*   Updated: 2023/04/18 20:57:18 by bsequeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && (unsigned char)c != str[i])
		i++;
	if (str[i] == (unsigned char)c)
		return ((char *)&str[i]);
	return (0);
}

/*#include <stdio.h>
#include <string.h>

int main () {
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = 0;
   char *ret1;
   char *ret2;


   ret1 = strchr(str, ch);
   ret2 = ft_strchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret1);
   printf("String after |%c| is - |%s|\n", ch, ret2);
   
   return(0);
}*/
