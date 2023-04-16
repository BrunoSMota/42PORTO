/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsequeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 19:54:22 by bsequeir          #+#    #+#             */
/*   Updated: 2023/03/14 19:54:48 by bsequeir         ###   ########.fr       */
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

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	size;

	i = 0;
	size = ft_strlen(str);
	while (i < size)
	{
		if (str[i] < 97 || str[i] > 122)
			return (0);
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char	*str;

	str = "caSarosfsgdgdrra";
	printf("%s\n", str);
	printf("%d", ft_str_is_lowercase(str));
}*/
