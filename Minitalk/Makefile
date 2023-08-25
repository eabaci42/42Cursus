# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eabaci <eabaci@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/06 19:32:08 by eabaci            #+#    #+#              #
#    Updated: 2023/06/06 19:32:09 by eabaci           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAMESERVER = server
NAMECLIENT = client
SRCSERVER = server.c
SRCCLIENT = client.c
FLAGS = -Wall -Wextra -Werror
CC = gcc
OBJSERVER = $(SRCSERVER:.c=.o)
OBJCLIENT = $(SRCCLIENT:.c=.o)

all: $(NAMESERVER) $(NAMECLIENT)

$(NAME) : all

$(NAMESERVER) : $(OBJSERVER)
	$(CC) $(OBJSERVER) -o $(NAMESERVER) $(LIB)

$(NAMECLIENT) : $(OBJCLIENT)
	$(CC) $(OBJCLIENT) -o $(NAMECLIENT) $(LIB)

clean:
	rm -rf $(OBJSERVER) $(OBJCLIENT)

fclean: clean
	rm -rf $(NAMESERVER) $(NAMECLIENT)

ffclean: fclean
	make fclean -C

.c.o:
	$(CC) $(FLAGS) -c $^ -o $@

norm:
	norminette *.c

re:fclean all

.PHONY : re fclean clean all ffclean norm
