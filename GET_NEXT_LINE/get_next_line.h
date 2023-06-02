/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsequeir <bsequeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 14:41:44 by bsequeir          #+#    #+#             */
/*   Updated: 2023/06/02 17:37:11 by bsequeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 5
#endif

char *get_next_line(int fd);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strdup(const char *string);
size_t	ft_strlen(const char *str);
int	ft_strchr(const char *str, int c);
void	*ft_memcpy(void *dest, const void *src,  int n);
char *clean_string(char *str, int c);
void	ft_bzero(void *str, size_t n);
#endif