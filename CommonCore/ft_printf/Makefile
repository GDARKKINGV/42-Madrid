# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jugirald <jugirald@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/25 09:18:18 by jugirald          #+#    #+#              #
#    Updated: 2023/09/25 09:18:18 by jugirald         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a

SRCS		= ft_printf.c
OBJS		= $(SRCS:.c=.o)

LIBFT_PATH	= libft
LIBFT		= $(LIBFT_PATH)/libft.a

CFLAGS		= -Wall -Werror -Wextra

$(NAME): $(LIBFT) $(OBJS)
	cp $(LIBFT) $(NAME)
	ar rc $(NAME) $(OBJS)

$(LIBFT):
		make -C $(LIBFT_PATH) all

all: $(NAME)

clean:
		make -C $(LIBFT_PATH) clean
		rm -f $(OBJS)

fclean: clean
		make -C $(LIBFT_PATH) fclean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re libft