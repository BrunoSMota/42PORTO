/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsequeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 16:01:30 by bsequeir          #+#    #+#             */
/*   Updated: 2023/03/19 15:44:07 by bsequeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && i < n)
	{
		i++;
	}
	if (i == n)
		i--;
	return (s1[i] - s2[i]);
}

/*#include <stdio.h>
#include <string.h>

int main(void)
{
    char *s1 = "paralelepipedo";
    char *s2 = "paraLelepipedo";
	int i = 6;
	printf("%d\n", strncmp(s1, s2, i));
    printf("%d\n", ft_strncmp(s1, s2, i));
}*/
