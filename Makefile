# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkravetz <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/10 16:08:07 by mkravetz          #+#    #+#              #
#    Updated: 2019/10/15 15:58:19 by mkravetz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
FLAGS = -Wall -Werror -Wextra

NAME = libft.a

SRC = ft_atoi.c ft_isdigit.c ft_split.c ft_bzero.c ft_isprint.c \
	 ft_memset.c ft_strchr.c ft_strlen.c ft_isalnum.c ft_memcmp.c \
	 ft_isalpha.c ft_isascii.c ft_tolower.c ft_toupper.c ft_strlcat.c \
	 ft_strncmp.c ft_strlcpy.c ft_memccpy.c ft_memchr.c ft_memcpy.c \
	 ft_memmove.c ft_memcmp.c ft_strrchr.c ft_strnstr.c ft_calloc.c \
	 ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_strmapi.c \
	 ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) libft.h
	ar rc $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CCFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

so: $(OBJ) libft.h
	$(CC) -shared -fPIC -Wl,-soname,libft.so -o libft.so $(OBJ)
