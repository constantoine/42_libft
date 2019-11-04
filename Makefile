# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: crebert <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/04 16:49:36 by crebert           #+#    #+#              #
#    Updated: 2019/11/04 21:04:36 by crebert          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC= ft_atoi.c ft_isalpha.c ft_isalnum.c ft_calloc.c ft_bzero.c ft_isdigit.c
SRC:= $(SRC) ft_isspace.c ft_memcpy.c ft_memset.c ft_memmove.c ft_tolower.c
SRC:= $(SRC) ft_strlen.c ft_toupper.c ft_strdup.c ft_putchar.c ft_putstr.c
SRC:= $(SRC) ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c
SRC:= $(SRC) ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c
SRC:= $(SRC) ft_lstmap.c
OBJ= $(SRC:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror
EXEC=libft.a

all: $(EXEC)

$(EXEC): $(HEAD) $(OBJ)
			ar rcs $(EXEC) $(OBJ)

%.o: %.c %.h
	$(CC) $(CFLAGS) -c $< -o $@

re: fclean all

clean:
			rm -rf $(OBJ)

fclean: clean
			rm -rf $(EXEC)

.PHONY: clean fclean re all
