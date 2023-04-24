/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsequeir <bsequeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 15:37:00 by bsequeir          #+#    #+#             */
/*   Updated: 2023/04/24 19:55:13 by bsequeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
https://cplusplus.com/reference/cstdio/printf/

%[flags][width][.precision][length]specifier

Specifiers
• %c Prints a single character.
• %s Prints a string (as defined by the common C convention).
• %p The void * pointer argument has to be printed in hexadecimal format.
• %d Prints a decimal (base 10) number.
• %i Prints an integer in base 10.
• %u Prints an unsigned decimal (base 10) number.
• %x Prints a number in hexadecimal (base 16) lowercase format.
• %X Prints a number in hexadecimal (base 16) uppercase format.
• %% Prints a percent sign.

Flags
• - Left-justify within the given field width.
• + Forces to preceed the result with a plus or minus sign (+ or -) even for positive numbers.
• █ If no sign is going to be written, a blank space is inserted before the value.
• # Used with x or X specifiers the value is preceeded with 0x or 0X respectively for values different than zero.
• 0 Left-pads the number with zeroes (0) instead of spaces when padding is specified.

Width
• (number) Minimum number of characters to be printed. If the value to be printed is shorter than this number, the result is padded with blank spaces.
• * The width is not specified in the format string, but as an additional integer value argument preceding the argument that has to be formatted.

Precision
• .(number) .*
	For integer specifiers (d, i, u, x, X): precision specifies the minimum number of digits to be written. If the value to be written is shorter than this number, the result is padded with leading zeros. The value is not truncated even if the result is longer. A precision of 0 means that no character is written for the value 0.
	For s: this is the maximum number of characters to be printed. By default all characters are printed until the ending null character is encountered.
	If the period is specified without an explicit value for precision, 0 is assumed.

If the 0 and - flags both appear, the 0 flag is ignored.
If a precision is given with a numeric conversion (d, i, o, u, x, and X), the 0 flag is ignored.


>printf("%s, %d, %p", 0, 0, 0);
>(null), 0, (nil)
*/

#include "ft_printf.h"
#include <stdarg.h>
#include <stdio.h>


int ft_printf(const char *format, ...)
{
    va_list list;
    int i;
    int count;

    if (!format || *format == '\0')
        return (0);
    va_start(list, format);
    i = 0;
    count = 0;
    while (format[i] != '\0')
    {
        if (format[i] == '%')
        {
            count = count + 2;
            if (format[i + 1] == 'c')
            {
                ft_putchar_fd(va_arg(list, int), 1);
                count--;
            }
            if (format[i + 1] == 's')
                count = count - ft_putstr_fdp(va_arg(list, char*), 1);
            /*if (format[i + 1] == 'p')
                count = count - ft_putpointer(va_arg(list, *void), 1);
            if (format[i + 1] == 'd')
                count = count - ft_putdecimal(va_arg(list, int), 1);
            if (format[i + 1] == 'i')
                count = count - ft_putinteger(va_arg(list, int), 1);
            if (format[i + 1] == 'u')
                count = count - ft_putudecimal(va_arg(list, unsigned int), 1);
            if (format[i + 1] == 'x')
                count = count - ft_putminhex(va_arg(list, int), 1);
            if (format[i + 1] == 'X')
                count = count - ft_putmaxhex(va_arg(list, int), 1);*/
            if (format[i + 1] == '%')
            {
                write(1, &format[i+1], 1);
                count--;
            }
        }
        write(1, &format[i], 1);
        i++;
    }
    va_end(list);
    return(i - count - 1);
}

int main(void)
{
    char c = 'c';
    printf("%c\n", c);
    ft_printf("%c\n", c);
}