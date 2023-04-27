# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bsequeir <bsequeir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/24 15:20:32 by bsequeir          #+#    #+#              #
#    Updated: 2023/04/27 19:29:12 by bsequeir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES	= ft_printf.c ft_putchar.c ft_putstr.c ft_putdecimal.c ft_putuns.c \
			ft_minhex.c ft_maxhex.c ft_putpointer.c

OBJS = $(SOURCES:.c=.o)

RM = rm -f
CFLAGS = -Wall -Wextra -Werror -I.

NAME = libftprintf.a

LIBFT_PATH		=	./LIBFT
LIBFT			=	$(LIBFT_PATH)/libft.a

all: 		$(NAME)

$(NAME):			$(LIBFT) $(OBJS)
					cp		$(LIBFT) $(NAME)
					ar rcs	$(NAME) $(OBJS)
$(LIBFT):
					make -C $(LIBFT_PATH) all

clean:
			make -C $(LIBFT_PATH) clean
					$(RM) $(OBJS)


fclean:		clean
				make -C $(LIBFT_PATH) fclean
					$(RM) $(NAME)
					
re: 		fclean all

.PHONY: all clean fclean re libft