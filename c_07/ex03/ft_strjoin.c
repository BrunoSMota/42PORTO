/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsequeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 22:10:35 by bsequeir          #+#    #+#             */
/*   Updated: 2023/03/23 16:22:51 by bsequeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	size_retorno(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	count;

	j = 0;
	count = 0;
	while (j < size)
	{
		i = 0;
		while (strs[j][i] != '\0')
		{
			i++;
			count++;
		}
		j++;
	}
	i = 0;
	while (sep[i] != 0)
	{
		i++;
	}
	count = count + i * (size - 1);
	return (count);
}

char	*wilewile(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		a;
	int		b;
	char	*retorno;

	a = size_retorno(size, strs, sep);
	retorno = (char *)malloc(sizeof(char) * (a + 1));
	j = 0;
	a = 0;
	while (j < size)
	{
		i = 0;
		b = 0;
		while (strs[j][i] != '\0')
			retorno[a++] = strs[j][i++];
		while (sep[b] != '\0' && j < (size - 1))
			retorno[a++] = sep[b++];
		j++;
	}
	retorno[a] = '\0';
	return (retorno);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*retorno;

	if (size == 0)
	{
		retorno = (char *)malloc(1);
		return (retorno);
	}
	retorno = wilewile(size, strs, sep);
	return (retorno);
}

/*#include <stdio.h>

int main(void)
{
    int size = 3;
    char *strs[3];
    char sep[] = ";  ;";
    char *retorno;

    strs[0] = "casa";
    strs[1] = "rosa";
    strs[2] = "bacana";

    retorno = ft_strjoin(size, strs, sep);
    printf("%s\n", retorno);
}*/
