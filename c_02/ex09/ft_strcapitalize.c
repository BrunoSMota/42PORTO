/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsequeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 22:10:18 by bsequeir          #+#    #+#             */
/*   Updated: 2023/03/15 20:45:56 by bsequeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	size;

	i = 0;
	size = ft_strlen(str);
	while (i < size)
	{
		if (str[i] >= 97 && str[i] <= 122 && (i == 0 || str[i - 1] < 48
				|| (str[i - 1] > 57 && str[i - 1] < 65)
				|| (str[i - 1] > 90 && str[i - 1] < 97)
				|| str[i - 1] > 122))
		{
			str[i] = str[i] - 32;
		}
		if ((str[i] >= 65 && str[i] <= 90) && i != 0 && ((str[i - 1] >= 48
					&& str[i - 1] <= 57) || (str[i - 1] >= 65
					&& str[i - 1] <= 90) || (str[i - 1] >= 97
					&& str[i - 1] <= 122)))
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

/*#include <stdio.h>

int	main(void)
{
	char	str[] = "ola, tudo bem? 42pAlAvrAs quarenta-e-duas; cinquenta+e+um";

	printf("%s\n", str);
    ft_strcapitalize(str);
	printf("%s", str);
}*/
