/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsequeir <bsequeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 21:06:34 by bsequeir          #+#    #+#             */
/*   Updated: 2023/04/18 21:09:19 by bsequeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
		dest[i] = '\0';
	}
	while (((unsigned char *)src)[i] != '\0')
		i++;
	return (i);
}

/*#include <stdio.h>
#include <string.h>
#include <sys/types.h>

size_t strlcpy(char *, const char *, size_t);*/

/*
 * Copy src to string dst of size siz.  At most siz-1 characters
 * will be copied.  Always NUL terminates (unless siz == 0).
 * Returns strlen(src); if retval >= siz, truncation occurred.
 */
/*size_t strlcpy(char *dst, const char *src, size_t siz)
{
        char *d = dst;
        const char *s = src;
        size_t n = siz;

        if (n != 0 && --n != 0) {
                do {
                        if ((*d++ = *s++) == 0)
                                break;
                } while (--n != 0);
        }

        if (n == 0) {
                if (siz != 0)
                        *d = '\0';
                while (*s++)
                        ;
        }

        return(s - src - 1);
}

void test(size_t size)
{
    const char string[] = "Hello there, Venus";
    char buffer1[19];
    char buffer2[19];
    int r;
    int q;

    r = strlcpy(buffer1,string, size);
    q = ft_strlcpy(buffer2,string, size);

    printf("1 Copied '%s' into '%s', length %d\n", string, buffer1, r);
    printf("2 Copied '%s' into '%s', length %d\n", string, buffer2, q);
}

int main(void)
{
    test(19);
    test(10);
    test(3);
    test(0);

    return(0);
}*/
