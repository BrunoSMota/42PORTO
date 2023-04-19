/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsequeir <bsequeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 17:54:15 by bsequeir          #+#    #+#             */
/*   Updated: 2023/04/19 20:28:06 by bsequeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

static int	my_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen(str);
	while (i > -1)
	{
		if (str[i] == (unsigned char)c)
			return (1);
		i--;
	}
	return (0);
}

static int	*size(char const *s1, char const *set)
{
	int	*v;
	int	i;
	int	j;

	v = malloc(sizeof(int) * 3);
	i = 0;
	j = ft_strlen(s1);
	while (my_strrchr(set, s1[i]) == 1)
	{
		i++;
	}
	v[0] = i;
	while (my_strrchr(set, s1[j]) == 1)
	{
		j--;
	}
	v[1] = j + 1;
	v[2] = v[1] - i;
	return (v);
}

static int	empty(char const *s1, char const *set)
{
	int	i;

	i = 0;
	if (!s1)
		return (1);
	while (my_strrchr(set, s1[i]) == 1 && s1[i] != '\0')
	{
		i++;
	}
	if (i == (int)ft_strlen(s1))
		return (1);
	else
		return (0);
}

static void	create_trim(char const *s1, int *v, char *trim)
{
	int	i;
	int	j;

	i = v[0];
	j = 0;
	while (i < v[1])
	{
		trim[j] = s1[i];
		j++;
		i++;
	}
	trim[j] = '\0';
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		*v;
	char	*trim;

	if (empty(s1, set) == 1)
	{
		trim = malloc(sizeof(char) * 1);
		trim[0] = '\0';
		return (trim);
	}
	v = malloc(sizeof(int) * 3);
	if (!v)
		return (0);
	v = size(s1, set);
	trim = malloc(sizeof(char) * (v[2] + 1));
	if (!trim)
		return (0);
	create_trim(s1, v, trim);
	return (trim);
}

/*int main(void)
{
    char *s1 = "cccc";
    char *set = "c";

    printf("%s\n", ft_strtrim(s1, set));
}*/
