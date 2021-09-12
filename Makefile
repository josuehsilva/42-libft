# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joshenri <joshenri@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/28 09:04:12 by joshenri          #+#    #+#              #
#    Updated: 2021/09/11 20:23:39 by joshenri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

SRC			= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_atoi.c
OBJ			= $(SRC:.c=.o)
INCLUDE		= libft.h

CC			= clang
CFLAGS		= -Wall -Wextra -Werror
AR			= ar rcs

all:		$(NAME)

$(NAME):	$(OBJ) $(INCLUDE)
	$(AR) $(NAME) $(OBJ)

$(OBJ):		$(SRC)
	$(CC) -c $(SRC)

clean:
	rm -f $(OBJ)

fclean:		clean
	rm -f $(NAME)

re:			fclean all

.PHONY: clean fclean all re
