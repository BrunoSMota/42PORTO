/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsequeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 20:45:16 by bsequeir          #+#    #+#             */
/*   Updated: 2023/03/15 23:51:21 by bsequeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		write(1, &str[count], 1);
		count++;
	}
}

/*int main()
{
	char *str;

    str = "casa rosa";
    ft_putstr(str);
}*/
