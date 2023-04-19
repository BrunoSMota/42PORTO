/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsequeir <bsequeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 20:27:58 by bsequeir          #+#    #+#             */
/*   Updated: 2023/04/18 19:27:36 by bsequeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *str, size_t n)
{
	size_t	i;
	char	*argv;

	i = 0;
	argv = (char *)str;
	while (i < n)
	{
		argv[i] = '\0';
		i++;
	}
}

/*#include <stdio.h>
#include <string.h>

int main(void) 
{
    char str[50];
    size_t i = 0;
    char ft_str[50];
    size_t j = 0;

    strcpy(str,"casa");
    strcpy(ft_str,"casa");
    puts(str);
    puts(ft_str);
    bzero(str, 2);
    ft_bzero(ft_str, 2);
    while(i < 4)
    {
        printf("%c\n", str[i]);
        i++;
    }
    printf("parte 2\n");
    while(j < 4)
    {
        printf("%c\n", ft_str[j]);
        j++;
    }
   return(0);
}*/
