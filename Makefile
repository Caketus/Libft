# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkravetz <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/10 16:08:07 by mkravetz          #+#    #+#              #
#    Updated: 2019/11/08 18:46:39 by mkravetz         ###   ########.fr        #
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

SRC2= ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_listsize_bonus.c \
	  ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
	  ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

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
