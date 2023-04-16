/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsequeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 18:36:52 by bsequeir          #+#    #+#             */
/*   Updated: 2023/03/26 18:40:51 by bsequeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

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

char	*ft_strdup(char *src)
{
	char	*copy;
	int		i;
	int		j;

	i = 0;
	while (src[i] != '\0')
		i++;
	copy = (char *)malloc(sizeof(char) * (i + 1));
	j = 0;
	if (copy == NULL)
		return (0);
	while (src[j] != '\0')
	{
		copy[j] = src[j];
		j++;
	}
	copy[j] = '\0';
	return (copy);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*matriz;
	int			i;

	matriz = malloc(sizeof(t_stock_str) * (ac + 1));
	if (matriz == NULL)
		return (0);
	i = 0;
	while (av[i] != 0 && i < ac)
	{
		matriz[i].size = ft_strlen(av[i]);
		matriz[i].str = av[i];
		matriz[i].copy = ft_strdup(av[i]);
		i++;
	}
	matriz[i].size = 0;
	matriz[i].str = 0;
	matriz[i].copy = 0;
	return (matriz);
}

/*#include <stdio.h>

int	main()
{
	char	*strings[] = {"string1", "string2", "stringmuitomaior1",
	"fim", "", "loucura", "issae"};
	struct s_stock_str *tab = ft_strs_to_tab(7, strings);
	struct s_stock_str *it = tab;

	tab[1].copy[3] = 'o';
	tab[3].copy[0] = 'S';

	while (it->str != 0)
	{
		printf("%s\n", it->str);
		printf("%i\n", it->size);
		printf("%s\n", it->copy);
		++it;
	}
}*/
