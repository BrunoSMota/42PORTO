/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsequeir <bsequeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 18:31:05 by bsequeir          #+#    #+#             */
/*   Updated: 2023/04/18 20:42:03 by bsequeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*argv;

	i = 0;
	argv = (unsigned char *)str;
	while (i < n)
	{
		argv[i] = (unsigned char)c;
		i++;
	}
	return (str);
}

/*#include <stdio.h>
#include <string.h>

int main(void) 
{
    char str[50];
    char ft_str[50];

    strcpy(str,"This is string.h library function");
    strcpy(ft_str,"This is string.h library function");
    puts(str);
    puts(ft_str);
    memset(str,'$',7);
    ft_memset(ft_str,'$',7);
    puts(str);
    puts(ft_str);
   
   return(0);
}*/
