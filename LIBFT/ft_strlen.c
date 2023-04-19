/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsequeir <bsequeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 18:18:08 by bsequeir          #+#    #+#             */
/*   Updated: 2023/04/18 20:59:04 by bsequeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*#include <stdio.h>
#include <string.h>

int main (void)
{
    char *str = "Casa rosa";
    int len1;
    int len2;

    len1 = strlen(str);
    len2 = ft_strlen(str);
    printf("Length of |%s| is |%d|\n", str, len1);
    printf("Length of |%s| is |%d|\n", str, len2);
   
    return(0);
}*/
