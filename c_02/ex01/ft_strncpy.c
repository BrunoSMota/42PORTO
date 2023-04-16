/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsequeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 18:46:35 by bsequeir          #+#    #+#             */
/*   Updated: 2023/03/14 19:15:10 by bsequeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}*/

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

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	unsigned int	size;

	i = 0;
	size = ft_strlen(src);
	while (i < size && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*int	main(void)
{
	char	*src;
	char	dest[20];
	int	n;
	int i = 0;

	src = "casa rosfsgdgdrra";
	n = 9;
	printf("%s\n", src);
	ft_strncpy(dest, src, n);
	while(i < n)
	{
		ft_putchar(dest[i]);
		i++;
	}
}*/
