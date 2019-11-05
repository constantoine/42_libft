# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: crebert <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/04 16:49:36 by crebert           #+#    #+#              #
#    Updated: 2019/11/05 20:30:38 by crebert          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC= src/numbers/ft_atoi.c src/is/ft_isalpha.c src/is/ft_isalnum.c
SRC:= $(SRC) src/memory/ft_calloc.c src/memory/ft_bzero.c src/is/ft_isdigit.c
SRC:= $(SRC) src/is/ft_isspace.c src/memory/ft_memcpy.c src/memory/ft_memset.c
SRC:= $(SRC) src/memory/ft_memmove.c src/strings/ft_tolower.c
SRC:= $(SRC) src/strings/ft_strlen.c src/strings/ft_toupper.c
SRC:= $(SRC) src/strings/ft_strdup.c src/strings/ft_putchar.c
SRC:= $(SRC) src/strings/ft_putstr.c src/is/ft_isascii.c
SRC:= $(SRC) src/is/ft_isprint.c src/files/ft_putstr_fd.c
SRC:= $(SRC) src/files/ft_putendl_fd.c src/files/ft_putchar_fd.c
SRC:= $(SRC) src/strings/ft_split.c src/numbers/ft_putnbr_fd.c
SRC:= $(SRC) src/memory/ft_memchr.c src/memory/ft_memccpy.c
SRC:= $(SRC) src/memory/ft_memcmp.c src/strings/ft_strchr.c
SRC:= $(SRC) src/strings/ft_strrchr.c src/strings/ft_strnstr.c
SRC:= $(SRC) src/numbers/ft_itoa.c src/strings/ft_strtrim.c
SRC:= $(SRC) src/strings/ft_strncmp.c src/strings/ft_strjoin.c
SRC:= $(SRC) src/strings/ft_strlcat.c src/strings/ft_strlcpy.c
SRC:= $(SRC) src/strings/ft_substr.c src/func_ptr/ft_strmapi.c
SRC_BONUS= src/list/ft_lstnew.c src/list/ft_lstadd_front.c
SRC_BONUS:= $(SRC_BONUS) src/list/ft_lstsize.c src/list/ft_lstlast.c
SRC_BONUS:= $(SRC_BONUS) src/list/ft_lstadd_back.c src/list/ft_lstdelone.c
SRC_BONUS:= $(SRC_BONUS) src/list/ft_lstclear.c src/list/ft_lstiter.c
SRC_BONUS:= $(SRC_BONUS) src/list/ft_lstmap.c
OBJ= $(SRC:.c=.o)
HEAD=include/libft.h
OBJ_BONUS= $(SRC_BONUS:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror -Iinclude
EXEC=libft.a

all: $(EXEC)

bonus: $(EXEC) $(OBJ_BONUS)
	ar rcs $(EXEC) $(OBJ_BONUS)

$(EXEC): $(HEAD) $(OBJ)
	ar rcs $(EXEC) $(OBJ)

%.o: %.c %.h
	$(CC) $(CFLAGS) -c $< -o $@

re: fclean all

clean:
	rm -rf $(OBJ) $(OBJ_BONUS)

fclean: clean
			rm -rf $(EXEC)

.PHONY: clean fclean re all bonus
