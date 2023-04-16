/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsequeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 21:24:16 by bsequeir          #+#    #+#             */
/*   Updated: 2023/03/19 15:46:07 by bsequeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			while (str[i + j] == to_find[j])
			{
				j++;
				if (to_find[j] == '\0')
				{
					return (&str[i]);
				}
			}
		}
		i++;
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>

int main(void)
{
    char *str = "carro dos capixabas carpados";
    char *to_find = "c";
    to_find = ft_strstr(str, to_find);
    printf("%s\n", ft_strstr(str, to_find));
	printf("%s\n", strstr(str, to_find));
}*/
