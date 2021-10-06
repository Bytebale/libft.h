# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lshonta <lshonta@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/06 13:53:04 by lshonta           #+#    #+#              #
#    Updated: 2021/10/06 15:12:30 by lshonta          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a
CC := gcc
CFLAGS := -Wall -Werror -Wextra -c
LFLAGS	= -Wall -Werror -Wextra -o
SRC_FILES := ./*.c\
OBJ_FILES = $(SRC_FILES:.c=.o)
SRCS = $(SRC_FILES)
OBJS = $(OBJ_FILES)
RM := @rm -rf

all: $(NAME)

$(OBJ_FILES)%.o: $(SRC_FILES)%.c
	$(CC) $(CFLAGS) $< -o $@

$(NAME): $(OBJS)
	$(CC) $(LFLAGS) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re