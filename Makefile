# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joshenri <joshenri@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/28 09:04:12 by joshenri          #+#    #+#              #
#    Updated: 2021/09/15 00:13:53 by joshenri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c\
ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c  ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c \
ft_strchr.c ft_strdup.c ft_strlcat.c   ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_strtrim.c \
ft_tolower.c ft_toupper.c  \
ft_substr.c ft_strjoin.c\



CC = gcc

CFLAGS = -Wall -Werror -Wextra

OBJ := $(SRC:%.c=%.o)

all:    $(NAME)

$(NAME):    $(OBJ)
	ar -rcs $(NAME) $(OBJ)

clean:
	rm -rf *.o
	rm -rf ./a.out

fclean:    clean
	rm -rf $(NAME)

re:    fclean all

.PHONY: clean fclean all re
