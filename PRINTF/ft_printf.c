/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsequeir <bsequeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 15:37:00 by bsequeir          #+#    #+#             */
/*   Updated: 2023/04/27 22:22:19 by bsequeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <stdio.h>
#include "LIBFT/libft.h"

int	flags(char f, va_list l)
{
	int		count;

	count = 0;
	if (f == 'c')
		count += ft_putchar(va_arg(l, int));
	if (f == 's')
		count += ft_putstr(va_arg(l, char *));
	if (f == 'p')
		count += ft_putpointer(va_arg(l, unsigned long));
	if (f == 'd' || f == 'i')
		count += ft_putdecimal(va_arg(l, int), 1);
	if (f == 'u')
		count += ft_putuns(va_arg(l, unsigned int));
	if (f == 'x')
		count += ft_minhex(va_arg(l, unsigned int));
	if (f == 'X')
		count += ft_maxhex(va_arg(l, unsigned int));
	if (f == '%')
		count += write(1, &f, 1);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	l;
	int		count;
	int		i;

	i = -1;
	count = 0;
	if (!format || *format == '\0')
		return (0);
	va_start(l, format);
	while (format[++i] != '\0')
	{
		if (format[i] == '%')
		{
			count += flags(format[++i], l);
			continue ;
		}
		count += write(1, &format[i], 1);
	}
	va_end(l);
	return (count);
}

/*int main(void)
{
    //char *c = "A casa rosa tem 4 quartos";
    //char d = 'd';
    int a, b; //e = -14;
    //b = printf("tot -> %s\n", c);
    //printf("%s\n", (char *)0);
    //a = ft_printf("tot -> %s\n", c);
    //printf("%d\n", a);
	a = printf(" %p %p \n", (void *)0, (void *)0);
	printf("%d\n", a);
	b = ft_printf(" %p %p \n", 0, 0);
	printf("%d\n", b);
}*/
