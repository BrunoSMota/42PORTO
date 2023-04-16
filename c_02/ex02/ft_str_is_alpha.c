/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsequeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 19:39:14 by bsequeir          #+#    #+#             */
/*   Updated: 2023/03/14 19:42:58 by bsequeir         ###   ########.fr       */
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

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	size;

	i = 0;
	size = ft_strlen(str);
	while (str[i] != '\0')
	{
		if (str[i] < 65 || (str[i] > 90 && str[i] < 97) || str[i] > 122)
			return (0);
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char	*str;

	str = "casarosfsgdgdrra";
	printf("%s\n", str);
	printf("%d", ft_str_is_alpha(str));
}*/
