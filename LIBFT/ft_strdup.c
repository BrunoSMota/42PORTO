/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsequeir <bsequeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 22:47:00 by bsequeir          #+#    #+#             */
/*   Updated: 2023/04/21 17:20:47 by bsequeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

char	*ft_strdup(const char *string)
{
	char	*copy;
	int		i;
	int		j;

	i = 0;
	while (string[i] != '\0')
		i++;
	copy = (char *)malloc(sizeof(char) * (i + 1));
	j = 0;
	if (copy == NULL)
		return (0);
	while (string[j] != '\0')
	{
		copy[j] = string[j];
		j++;
	}
	copy[j] = '\0';
	return (copy);
}

/*#include <stdio.h>
#include <string.h>

int		main(void)
{
	char	*str;
	char	*str_copy;

	str = "Test string.";
	str_copy = ft_strdup(str);
	if (strcmp(str, str_copy) != 0)
		printf("KO, string is not the same.\n");
	else
		printf("OK.\n");
	str = "";
	str_copy = ft_strdup(str);
	if (strcmp(str, str_copy) != 0)
		printf("KO, string is not the same.\n");
	else
		printf("OK.\n");
	str = "eeeeeeee vida de gado";
	str_copy = ft_strdup(str);
	if (strcmp(str, str_copy) != 0)
		printf("KO, string is not the same.\n");
	else
		printf("OK.\n");
	return (0);
}*/
