/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsequeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 15:59:09 by bsequeir          #+#    #+#             */
/*   Updated: 2023/03/14 16:02:44 by bsequeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	menor;
	int	j;

	i = 0;
	j = 0;
	menor = tab[i];
	while (j < size)
	{
		while (i < size)
		{
			if (tab[i] < menor)
			{
				menor = tab[i];
				tab[i] = tab[j];
				tab[j] = menor;
			}
			i++;
		}
		j++;
		i = j;
		menor = tab[i];
	}
}

int	main(void)
{
	int	size = 5;
	int	tab[] = {100, 23, 44, 13, 76};
	int	i = 0;

    while (i < size)
    {
    printf("%d ", tab[i]);
    i++;
    }
    printf("\n", tab[i]);
    ft_sort_int_tab(tab, size);
    i = 0;
    while (i < size)
    {
    printf("%d ", tab[i]);
    i++;
    }
}
