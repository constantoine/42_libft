# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: crebert <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/04 16:49:36 by crebert           #+#    #+#              #
#    Updated: 2019/11/07 19:53:45 by crebert          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC= ft_atoi.c ft_isalpha.c ft_isalnum.c
SRC:= $(SRC) ft_calloc.c ft_bzero.c ft_isdigit.c
SRC:= $(SRC) ft_isspace.c ft_memcpy.c ft_memset.c
SRC:= $(SRC) ft_memmove.c ft_tolower.c
SRC:= $(SRC) ft_strlen.c ft_toupper.c
SRC:= $(SRC) ft_strdup.c ft_putchar.c
SRC:= $(SRC) ft_putstr.c ft_isascii.c
SRC:= $(SRC) ft_isprint.c ft_putstr_fd.c
SRC:= $(SRC) ft_putendl_fd.c ft_putchar_fd.c
SRC:= $(SRC) ft_split.c ft_putnbr_fd.c
SRC:= $(SRC) ft_memchr.c ft_memccpy.c
SRC:= $(SRC) ft_memcmp.c ft_strchr.c
SRC:= $(SRC) ft_strrchr.c ft_strnstr.c
SRC:= $(SRC) ft_itoa.c ft_strtrim.c
SRC:= $(SRC) ft_strncmp.c ft_strjoin.c
SRC:= $(SRC) ft_strlcat.c ft_strlcpy.c
SRC:= $(SRC) ft_substr.c ft_strmapi.c
SRC_BONUS= ft_lstnew_bonus.c ft_lstadd_front_bonus.c
SRC_BONUS:= $(SRC_BONUS) ft_lstsize_bonus.c ft_lstlast_bonus.c
SRC_BONUS:= $(SRC_BONUS) ft_lstadd_back_bonus.c ft_lstdelone_bonus.c
SRC_BONUS:= $(SRC_BONUS) ft_lstclear_bonus.c ft_lstiter_bonus.c
SRC_BONUS:= $(SRC_BONUS) ft_lstmap_bonus.c
OBJ= $(SRC:.c=.o)
HEAD=libft.h
OBJ_BONUS= $(SRC_BONUS:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror -Iinclude
NAME=libft.a

all: $(NAME)

bonus: $(NAME) $(OBJ_BONUS)
	ar rcs $(NAME) $(OBJ_BONUS)

$(NAME): $(HEAD) $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c %.h
	$(CC) $(CFLAGS) -c $< -o $@

re: fclean all

clean:
	rm -rf $(OBJ) $(OBJ_BONUS)

fclean: clean
			rm -rf $(NAME)

.PHONY: clean fclean re all bonus
