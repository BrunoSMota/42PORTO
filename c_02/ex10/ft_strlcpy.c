/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsequeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 12:55:25 by bsequeir          #+#    #+#             */
/*   Updated: 2023/03/15 12:55:43 by bsequeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	unsigned int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	tam;

	i = 0;
	tam = ft_strlen(src);
	if (size == 0)
		return (tam);
	while (i < size && i < tam)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	i = 0;
	while (i < tam)
	{
		i++;
	}
	return (i);
}

/*#include <stdio.h>

int	main(void)
{
	char	*src;
	char	dest[20];
	int	n;

	src = "balacobaco";
	n = 9;
	printf("%s\n", src);
	printf("%d", ft_strlcpy(dest, src, n));
}*/
