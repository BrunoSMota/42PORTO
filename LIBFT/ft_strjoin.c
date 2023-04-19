/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsequeir <bsequeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 20:14:29 by bsequeir          #+#    #+#             */
/*   Updated: 2023/04/18 21:22:58 by bsequeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"
//#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*coc;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	coc = malloc(sizeof(char) *(ft_strlen(s1) + ft_strlen(s2) + 1));
	if (coc == NULL)
		return (0);
	while (s1[i] != '\0')
	{
		coc[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		coc[i] = s2[j];
		i++;
		j++;
	}
	coc[i] = '\0';
	return (coc);
}

/*int main(void)
{
    char *a = "casa ";
    char *b = "rosa";
    char *c = malloc(sizeof(char) * (ft_strlen(a) + ft_strlen(b)));

    c = ft_strjoin(a, b);
    printf("%s\n", c);

}*/
