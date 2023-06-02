/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsequeir <bsequeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 14:41:55 by bsequeir          #+#    #+#             */
/*   Updated: 2023/06/02 17:59:15 by bsequeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "get_next_line.h"
#include <stdio.h>

void	ft_bzero(void *str, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)str)[i] = '\0';
		i++;
	}
}

char *clean_string(char *str, int c)
{
	char *con;
	int d;
	int j;

	d = c;
    while (str[d] != '\0')
    {
		d++;
    }
	j = d - c;
    if (j == 0 || (d == 1 && str[0] == '\n'))
    {
        free(str);
        return NULL;
    }
	con = malloc(sizeof(char) * j);
    ft_bzero(con, j);
	d = 0;
	while(d < j)
	{
		con[d] = str[c + 1];
		d++;
		c++;
	}
    free(str);
	return (con);
}

char *get_next_line(int fd)
{
    char *red;
    static char *yellow;
    char *new_yellow;
    int pos;
    int i;

    if(fd < 0 || BUFFER_SIZE <= 0)
        return(NULL);
    pos = 0;
    while(pos == 0)
    {
        red = malloc(sizeof(char) * (BUFFER_SIZE + 1));
        ft_bzero(red, BUFFER_SIZE + 1);
        i = read(fd, red, BUFFER_SIZE);
        if(i <= 0 && (yellow == NULL || (pos == 0 && yellow[0] == '\0')))
        {
            free(red);
            /*if(yellow != NULL)
                free(yellow);*/
            return NULL;
        }
        new_yellow = ft_strjoin(yellow, red);
        free(yellow);
        free(red);
        yellow = new_yellow;
        pos = ft_strchr(yellow, '\n');
        if (pos == 0 && yellow[0] == '\n')
            break;
        if ((i == 0 || (i == 1 && BUFFER_SIZE != 1)) && pos == 0 && yellow[0] != '\0')
            pos = ft_strlen(yellow);
    }
    red = malloc(sizeof(char) * (pos + 2));
    ft_bzero(red, (pos + 2));
    ft_memcpy(red, yellow, pos);
    yellow = clean_string(yellow, pos);
    return (red);
}

int main(void)
{
   int fd;
   fd = open("test.txt", O_RDONLY);
   char *fp;
   int i = 0;

   while(i < 7)
   {
        fp = get_next_line(0);
        printf("%s",fp);
        free(fp);
        i++;
   }
   
   return(0);
}