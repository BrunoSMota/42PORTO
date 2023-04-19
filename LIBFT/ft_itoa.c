/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsequeir <bsequeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 23:23:40 by bsequeir          #+#    #+#             */
/*   Updated: 2023/04/19 17:43:14 by bsequeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	count(int n)
{
	unsigned int	tot;

	tot = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		tot++;
	while (n != 0)
	{
		tot++;
		n = n / 10;
	}
	return (tot);
}

static void	inttochar(int n, char *p, int tot)
{
	while (n != 0)
	{
		p[tot - 1] = (n % 10) + 48;
		n = n / 10;
		tot--;
	}
}

char	*ft_itoa(int n)
{
	char			*p;
	unsigned int	tot;

	tot = count(n);
	p = malloc(sizeof(char) * (tot + 1));
	if (!p)
		return (0);
	if (n == -2147483648)
	{
		p[0] = '-';
		p[1] = '2';
		n = 147483648;
	}
	if (n == 0)
		p[0] = 48;
	if (n < 0)
	{
		p[0] = '-';
		n = n * -1;
	}
	p[tot] = '\0';
	inttochar(n, p, tot);
	return (p);
}

/*#include <stdio.h>

int main(void)
{
    int n = 2147483647;
    printf("%s\n", ft_itoa(n));
    return (0);
}*/
