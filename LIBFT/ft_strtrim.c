/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsequeir <bsequeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 17:54:15 by bsequeir          #+#    #+#             */
/*   Updated: 2023/04/21 17:56:21 by bsequeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*dest;
	unsigned int	start;
	unsigned int	end;

	if (!s1 || !set)
		return (0);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while ((s1[end] != s1[start]) && ft_strchr(set, s1[end]))
		end--;
	dest = ft_substr(s1, start, (end - start) + 1);
	if (!dest)
		return (0);
	return (dest);
}

/*int main(void)
{
    char *s1 = "cccc";
    char *set = "c";

    printf("%s\n", ft_strtrim(s1, set));
}*/
