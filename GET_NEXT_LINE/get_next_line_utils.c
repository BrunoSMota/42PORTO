/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsequeir <bsequeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 14:42:00 by bsequeir          #+#    #+#             */
/*   Updated: 2023/05/30 17:31:39 by bsequeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>
#include "get_next_line.h"
//#include <stdio.h>

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*coc;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s2)
		return (NULL);
	if (!s1)
		return(ft_strdup(s2));
	coc = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (coc == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		coc[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		coc[i] = s2[j];
		i++;
		j++;
	}
	coc[i] = '\0';
	return (coc);
}

char	*ft_strdup(const char *string)
{
	char	*copy;
	int		i;
	int		j;

	i = 0;
	while (string[i] != '\0')
		i++;
	copy = malloc(sizeof(char) * (i + 1));
	j = 0;
	if (copy == NULL)
		return (NULL);
	while (string[j] != '\0')
	{
		copy[j] = string[j];
		j++;
	}
	copy[j] = '\0';
	return (copy);
}

int	ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && (unsigned char)c != str[i])
		i++;
	if (str[i] == (unsigned char)c)
		return (i);
	return (0);
}

void	*ft_memcpy(void *dest, const void *src, int n)
{
	int		i;
	char		*d;
	const char	*s;

	i = 0;
	d = dest;
	s = src;
	if (src == NULL && dest == NULL)
		return (NULL);
	if(s[n] == '\n')
		n++;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	} 
	return (dest);
}