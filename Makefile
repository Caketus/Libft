# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkravetz <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/10 16:08:07 by mkravetz          #+#    #+#              #
#    Updated: 2019/11/08 21:00:23 by mkravetz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB = ar rcs
RM = rm -f

CC = gcc
CCFLAGS = -Wall -Wextra -Werror

NAME = libft.a
SRC = ft_atoi.c ft_isdigit.c ft_split.c ft_bzero.c ft_isprint.c \
	 ft_memset.c ft_strchr.c ft_strlen.c ft_isalnum.c ft_memcmp.c \
	 ft_isalpha.c ft_isascii.c ft_tolower.c ft_toupper.c ft_strlcat.c \
	 ft_strncmp.c ft_strlcpy.c ft_memccpy.c ft_memchr.c ft_memcpy.c \
	 ft_memmove.c ft_memcmp.c ft_strrchr.c ft_strnstr.c ft_calloc.c \
	 ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_strmapi.c \
	 ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
	 ft_strcat.c ft_strcpy.c ft_itoa.c ft_strndup.c
OBJ = $(SRC:.c=.o)
INCLUDE = libft.h

BONUSSRC= ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_listsize_bonus.c \
	  ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
	  ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

BONUSOBJ = $(BONUSSR:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) $(INCLUDE)
	$(LIB) $(NAME) $(OBJ)

bonus: $(BONUSOBJ) $(INCLUDE)
	$(LIB) $(NAME) $(BONUSOBJ)

%.o: %.c
	$(CC) $(CCFLAGS) -c -o $@ $<

clean:
	$(RM) $(OBJ) $(BONUSOBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

rebonus: fclean bonus

so: $(OBJ) $(BONUSOBJ) $(INCLUDE)
	$(CC) -shared -fPIC -Wl,-soname,-libft.so -o libft.so $(OBJ) $(BONUSOBJ)
