/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsequeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 14:28:55 by bsequeir          #+#    #+#             */
/*   Updated: 2023/03/21 14:36:48 by bsequeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	prints(int argc, char **argv)
{
	int	j;
	int	i;

	j = 1;
	while (j < argc)
	{
		i = 0;
		while (argv[j][i] != '\0')
		{
			write(1, &argv[j][i], 1);
			i++;
		}
		write(1, "\n", 1);
		j++;
	}
}

int	main(int argc, char **argv)
{
	char	*menor;
	int		i;
	int		j;

	j = 1;
	while (j < argc)
	{
		i = 1;
		while (i < argc)
		{
			if (ft_strcmp(argv[j], argv[i]) < 0)
			{
				menor = argv[j];
				argv[j] = argv[i];
				argv[i] = menor;
			}
			i++;
		}
		j++;
	}
	prints(argc, argv);
}
