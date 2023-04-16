# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bsequeir <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/26 20:55:40 by bsequeir          #+#    #+#              #
#    Updated: 2023/03/26 20:55:42 by bsequeir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

gcc -Wall -Werror -Wextra -c ft_putchar.c ft_strcmp.c ft_swap.c ft_putstr.c ft_strlen.c
ar -rc libft.a ft_putchar.o ft_strcmp.o ft_swap.o ft_putstr.o ft_strlen.o
ranlib libft.a
rm -f ft_putchar.o ft_strcmp.o ft_swap.o ft_putstr.o ft_strlen.o
