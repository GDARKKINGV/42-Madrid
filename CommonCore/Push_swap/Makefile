# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jugirald <jugirald@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/24 17:59:20 by jugirald          #+#    #+#              #
#    Updated: 2024/01/24 18:29:57 by jugirald         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= push_swap

SRCS		= push_swap.c
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