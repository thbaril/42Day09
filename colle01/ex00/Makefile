# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wabousfi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/14 04:21:59 by wabousfi          #+#    #+#              #
#    Updated: 2018/02/14 04:22:00 by wabousfi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle-1

all: $(NAME)

$(NAME):
	norminette *.c *.h
	cc -Wall -Wextra -Werror -o colle-1 *.c

clean:

fclean: clean
	rm -f $(NAME)

re: fclean all

test: fclean all
	./test.sh
