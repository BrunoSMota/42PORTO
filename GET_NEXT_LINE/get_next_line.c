/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsequeir <bsequeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 14:41:55 by bsequeir          #+#    #+#             */
/*   Updated: 2023/06/19 17:39:17 by bsequeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "get_next_line.h"
#include <stdio.h>

char	*get_next_line(int fd)
{
	static char	readed[BUFFER_SIZE + 1];
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	line = NULL;
	while (readed[0] != '\0' || read(fd, readed, BUFFER_SIZE) > 0)
	{
		line = ft_strjoin(line, readed);
		if (ft_strlen(readed) == 0)
			return (line);
		if (clean_string(readed) == 1)
			break ;
		if (read(fd, readed, 0) < 0)
		{
			free (line);
			return (NULL);
		}
	}
	return (line);
}

/* int main(void)
{
   int fd;
   fd = open("test.txt", O_RDONLY);
   char *fp;
   int i = 0;

   while(i < 8)
   {
        fp = get_next_line(fd);
        printf("%s\n",fp);
        free(fp);
        i++;
   }
   
   return(0);
} */
