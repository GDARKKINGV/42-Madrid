# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jugirald <jugirald@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/24 17:59:20 by jugirald          #+#    #+#              #
#    Updated: 2024/07/03 19:29:09 by jugirald         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


# Standard
NAME			= push_swap

# Directories
LIBFT			= libft/libft.a
INC				= includes/
SRC_DIR			= src/
OBJ_DIR			= obj/

# Compiler and Flags
CC				= gcc
CFLAGS			= -Wall -Wextra -Werror -I
RM				= rm -f
AR				= ar rcs

# Source Files

HANDLERS_DIR	=	$(SRC_DIR)handlers/init_handler.c \
					$(SRC_DIR)handlers/error_handler.c

MOVES_DIR		=	$(SRC_DIR)moves/push.c \
					$(SRC_DIR)moves/reverse_rotate.c \
					$(SRC_DIR)moves/rotate.c \
					$(SRC_DIR)moves/swap.c

MAIN_DIR		=	$(SRC_DIR)push_swap.c


# Concatenate all source files

SRCS 				= $(HANDLERS_DIR) $(MOVES_DIR) $(MAIN_DIR)

OBJ 				= $(patsubst $(SRC_DIR)%.c,$(OBJ_DIR)%.o,$(SRCS))

# Build rules
start:				
					@make all

$(LIBFT):
					@make -C ./libft

all: 				$(NAME)

$(NAME): 			$(OBJ) $(LIBFT)
					@$(CC) $(CFLAGS) $(INC) $(OBJ) $(LIBFT) -o $(NAME)

# Compile object files from source files
$(OBJ_DIR)%.o:		$(SRC_DIR)%.c 
					@mkdir -p $(@D)
					@$(CC) $(CFLAGS) $(INC) -c $< -o $@

clean:
					@$(RM) -r $(OBJ_DIR)
					@make clean -C ./libft

fclean: 			clean
					@$(RM) $(NAME)
					@$(RM) $(LIBFT)

re: 				fclean all

sanitize:			$(OBJ) $(LIBFT)
					@$(CC) $(CFLAGS) -fsanitize=address -I $(INC) $(OBJ) $(LIBFT) -o $(NAME)

# Phony targets represent actions not files
.PHONY: 			start all clean fclean re