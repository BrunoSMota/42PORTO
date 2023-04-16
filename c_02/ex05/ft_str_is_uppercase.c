/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsequeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 20:01:38 by bsequeir          #+#    #+#             */
/*   Updated: 2023/03/14 20:01:57 by bsequeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

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

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	size;

	i = 0;
	size = ft_strlen(str);
	while (i < size)
	{
		if (str[i] < 65 || str[i] > 90)
			return (0);
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char	*str;

	str = "2SGDJFJ";
	printf("%s\n", str);
	printf("%d", ft_str_is_uppercase(str));
}*/
