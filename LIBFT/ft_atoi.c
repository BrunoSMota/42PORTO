/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsequeir <bsequeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 22:20:11 by bsequeir          #+#    #+#             */
/*   Updated: 2023/04/18 19:25:24 by bsequeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*(str) == '-')
			sign *= -1;
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (result * sign);
}

/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
   char *str1 = "-+1234";
   char *str2 = "tutorialspoint.com";
   
   printf("String value = %s, Int value = %d\n", str1, atoi(str1));
   printf("String value = %s, Int value = %d\n", str1, ft_atoi(str1));
   printf("String value = %s, Int value = %d\n", str2, atoi(str2));
   printf("String value = %s, Int value = %d\n", str2, ft_atoi(str2));

   return(0);
}*/
