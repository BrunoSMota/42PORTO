/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsequeir <bsequeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 15:58:39 by bsequeir          #+#    #+#             */
/*   Updated: 2023/04/21 19:22:22 by bsequeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

static int	count_words(char const *s, char c)
{
	size_t	i;
	size_t	total;

	i = 0;
	total = 1;
	if (s[0] == '\0')
		return (0);
	while (s[i] == c)
	{
		i++;
	}
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i - 1] != c)
			total++;
		i++;
	}
	if (s[i - 1] == c)
		total--;
	return (total);
}

static int	*count_letters(char const *s, char c, int tot)
{
	int	*v;
	int	i;
	int	j;
	int	k;

	v = malloc(sizeof(int) * tot);
	i = 0;
	k = 0;
	while (k < tot && s[i] != '\0')
	{
		j = 0;
		while (s[i] == c)
		{
			i++;
		}
		while (s[i] != c && s[i] != '\0')
		{
			j++;
			i++;
		}
		v[k] = j;
		k++;
	}
	return (v);
}

static char	**ft_alloc_split(const char *s, char c)
{
	char		**split;
	int			*l;
	int			total;
	int			i;

	i = 0;
	total = count_words(s, c);
	split = malloc(sizeof(s) * (total + 1));
	if (!split)
		return (0);
	l = count_letters(s, c, total);
	while (i < total)
	{
		split[i] = malloc(sizeof(char) * (l[i] + 1));
		i++;
	}
	split[i] = NULL;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**sp;

	sp = ft_alloc_split(s, c);
	if (!sp)
		return (0);
	j = 0;
	i = 0;
	while (sp[j] != NULL && s[i] != '\0')
	{
		k = 0;
		while (s[i] == c)
			i++;
		while (s[i] != '\0' && s[i] != c)
		{
			sp[j][k] = s[i];
			i++;
			k++;
		}
		sp[j][k] = '\0';
		j++;
	}
	return (sp);
}

/*int main(void)
{
    char **sp;
    char *s = "      split       this for   me  !	";
    char c = ' ';
    int *v;
    int i;
    int tot;


    i = 0;
    tot = count_words(s, c);
    printf("tot -> %d\n", tot);
    v = malloc(sizeof(int)*tot);
    v = count_letters(s, c, tot);
    while(i < tot)
    {
        printf("%d\n", v[i]);
        i++;
    }
    sp = ft_split(s, c);
    i = 0;
    while(i < tot)
    {
        printf("%s\n", sp[i]);
        i++;
    }
}*/
