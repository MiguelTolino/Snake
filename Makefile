# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: miguel <miguel@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/17 01:26:28 by miguel            #+#    #+#              #
#    Updated: 2020/03/10 12:37:22 by miguel           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME:= snake
SRCS:= srcs/*.c

CC:= gcc
LIB = -lncurses

all: $(NAME)

$(NAME):
		$(CC)  $(SRCS) $(LIB) -o $(NAME)

debug:
		$(CC)  $(SRCS) -g $(LIB) -o $(NAME)

clean:
		rm snake

re:
	clean all

.PHONY: all clean re


