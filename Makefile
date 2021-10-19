# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lshonta <lshonta@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/06 13:53:04 by lshonta           #+#    #+#              #
#    Updated: 2021/10/19 18:51:22 by lshonta          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a 
LIST := ft_isalpha.c\
		ft_isdigit.c\
		ft_isalnum.c\
		ft_isascii.c\
        ft_isprint.c\
		ft_strlen.c\
		ft_memset.c\
		ft_bzero.c\
		ft_memcpy.c\
		ft_memmove.c\
		ft_memset.c\
		ft_strchr.c\
		ft_strlcat.c\
		ft_strlcpy.c\
		ft_strncmp.c\
		ft_strrchr.c\
		ft_tolower.c\
		ft_toupper.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_strnstr.c\
		ft_atoi.c\
		ft_calloc.c\
		ft_strdup.c\
		ft_substr.c\
		ft_strtrim.c\
		ft_strjoin.c\
		ft_split.c\
		ft_itoa.c\
		ft_strmapi.c\
		ft_striteri.c\
		ft_putchar_fd.c\
		ft_putstr_fd.c\
		ft_putendl_fd.c\
		ft_putnbr_fd.c\

LIST_B := ft_lstnew.c\
			ft_lstadd_front.c\
			ft_lstsize.c\
			ft_lstlast.c\
			ft_lstadd_back.c\
			ft_lstdelone.c\
			ft_lstclear.c\
			ft_lstiter.c\
			ft_lstmap.c\

FLAGS := -Wall -Werror -Wextra

OBJ = $(patsubst %.c,%.o, $(LIST))
OBJB = $(patsubst %.c,%.o, $(LIST_B))
FILES = $(patsubst %.c,%.d,$(LIST))
FILES_B = $(patsubst %.c,%.d,$(LIST_B))

all: $(NAME)

$(NAME) : $(OBJ)
	 ar -rsc $(NAME) $?

%.o : %.c
	gcc $(FLAGS) -c $<

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: $(OBJB)
	ar -rsc $(NAME) $(OBJB)

.PHONY: all clean fclean re