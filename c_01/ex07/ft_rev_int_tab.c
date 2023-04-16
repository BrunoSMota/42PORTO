/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsequeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:48:55 by bsequeir          #+#    #+#             */
/*   Updated: 2023/03/14 15:08:11 by bsequeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	j;
	int	c;

	j = 0;
	while (j < (size / 2))
	{
		c = tab[j];
		tab[j] = tab[size - 1 - j];
		tab[size - 1 - j] = c;
		j++;
	}
}

/*int	main(void)
{
	int	size = 3;
	int	tab[] = {1, 2, 3};
	int	i = 0;

    while (i < size)
    {
    printf("%d ", tab[i]);
    i++;
    }
    printf("\n", tab[i]);
    ft_rev_int_tab(tab, size);
    i = 0;
    while (i < size)
    {
    printf("%d ", tab[i]);
    i++;
    }
}*/
