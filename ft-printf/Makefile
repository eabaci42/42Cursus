# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eabaci <eabaci@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/29 17:43:22 by eabaci            #+#    #+#              #
#    Updated: 2022/12/29 17:45:57 by eabaci           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libftprintf.a
LIBFT=libft/libft.a

SRCS=ft_printf.c printf_utils.c
OBJS=$(SRCS:.c=.o)


CC=gcc
CFLAGS=-Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	make bonus -C ./libft
	cp libft/libft.a $(NAME)
	ar rcs $@ $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $^

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
