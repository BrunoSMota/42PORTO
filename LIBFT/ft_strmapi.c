/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsequeir <bsequeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 20:44:11 by bsequeir          #+#    #+#             */
/*   Updated: 2023/04/20 15:26:18 by bsequeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*sf;
	unsigned int	i;

	i = 0;
	sf = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!sf)
		return (0);
	while (s[i] != '\0')
	{
		sf[i] = f(i, s[i]);
		i++;
	}
	sf[i] = '\0';
	return (sf);
}
