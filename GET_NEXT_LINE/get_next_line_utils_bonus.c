/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsequeir <bsequeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 14:42:00 by bsequeir          #+#    #+#             */
/*   Updated: 2023/06/19 17:40:34 by bsequeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>
#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0' && str[i] != '\n')
	{
		i++;
	}
	if (str[i] == '\n')
		i++;
	return (i);
}

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*a;
	size_t	b;
	size_t	i;

	b = nitems * size;
	a = malloc(b);
	if (a == NULL)
		return (NULL);
	i = 0;
	while (i < b)
	{
		((unsigned char *)a)[i] = '\0';
		i++;
	}
	return (a);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*coc;
	int		i;
	int		j;

	i = 0;
	j = 0;
	coc = ft_calloc(sizeof(char), (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (coc == NULL)
		return (NULL);
	while (s1 && s1[i] != '\0')
	{
		coc[i] = s1[i];
		i++;
	}
	while (s2 && s2[j] != '\0')
	{
		coc[i] = s2[j];
		if (coc[i++] == '\n')
			break ;
		j++;
	}
	coc[i] = '\0';
	free (s1);
	return (coc);
}

int	clean_string(char *str)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (str[i] != '\0')
	{
		if (k == 1)
		{
			str[j] = str[i];
			j++;
		}
		if (str[i] == '\n')
			k = 1;
		str[i] = '\0';
		i++;
	}
	return (k);
}
