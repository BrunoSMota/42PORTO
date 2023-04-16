/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsequeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 17:00:54 by bsequeir          #+#    #+#             */
/*   Updated: 2023/03/15 21:52:42 by bsequeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;
	int	x;

	i = 0;
	while (str[i] != '\0')
	{
		if (32 <= str[i] && 127 > str[i])
			ft_putchar(str[i]);
		else
		{
			ft_putchar('\\');
			if (str[i] < 0)
				x = 256 + str[i];
			else
			{
				x = str[i];
			}
			ft_putchar("0123456789abcdef"[x / 16]);
			ft_putchar("0123456789abcdef"[x % 16]);
		}
		i++;
	}
}

/*#include <stdio.h>

int	main(void)
{
	char	str[] = "Ola\nesta bem?";

	printf("%s\n", str);
	ft_putstr_non_printable(str);
	write(1, "\n", 1);
}*/
