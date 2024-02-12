# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jugirald <jugirald@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/16 17:52:11 by jugirald          #+#    #+#              #
#    Updated: 2023/10/23 18:05:19 by jugirald         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a
BONUS_NAME	= .bonus

SRCS		= ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_isalpha.c ft_isdigit.c \
				ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_strlcat.c ft_toupper.c ft_tolower.c \
				ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c \
				ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
				ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
OBJS		= $(SRCS:.c=.o)

BONUS		= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
				ft_lstclear.c ft_lstiter.c ft_lstmap.c
BONUS_OBJS	= $(BONUS:.c=.o)

CFLAGS		= -Wall -Werror -Wextra

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

$(BONUS_NAME): $(OBJS) $(BONUS_OBJS)
	ar rc $(NAME) $(OBJS) $(BONUS_OBJS)
	ar rc $(BONUS_NAME) $(BONUS) $(BONUS_OBJS)

all: $(NAME)

bonus: $(BONUS_NAME)

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME) $(BONUS_NAME)

re: fclean all

.PHONY: all clean fclean re