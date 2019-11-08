# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkravetz <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/10 16:08:07 by mkravetz          #+#    #+#              #
#    Updated: 2019/11/08 19:23:29 by mkravetz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: re, clean, fclean, all

SRC = ft_atoi.c ft_isdigit.c ft_split.c ft_bzero.c ft_isprint.c \
	 ft_memset.c ft_strchr.c ft_strlen.c ft_isalnum.c ft_memcmp.c \
	 ft_isalpha.c ft_isascii.c ft_tolower.c ft_toupper.c ft_strlcat.c \
	 ft_strncmp.c ft_strlcpy.c ft_memccpy.c ft_memchr.c ft_memcpy.c \
	 ft_memmove.c ft_memcmp.c ft_strrchr.c ft_strnstr.c ft_calloc.c \
	 ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_strmapi.c \
	 ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
	 ft_strcat.c ft_strcpy.c ft_itoa.c ft_strndup.c

SRC2= ft_lstnew.c ft_lstadd_front.c ft_listsize.c \
	  ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
	  ft_lstclear.c ft_lstiter.c ft_lstmap.c

NAME= libft.a

CC= gcc
CFLAGS= -Wall -Wextra -Werror

RM= rm -f
INC= libft.h
AR= ar rc

OBJ=$(SRC:.c=.o)
OBJ2=$(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) $(INC)
	$(AR) $(NAME) $(OBJ)

bonus: $(OBJ2) $(INC)
	$(AR) $(NAME) $(OBJ2)

%.c: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	$(RM) $(OBJ) $(OBJ2)

fclean: clean
	$(RM) $(NAME)

re: fclean all
