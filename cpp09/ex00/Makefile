# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/20 23:30:40 by kben-ham          #+#    #+#              #
#    Updated: 2024/02/20 23:31:11 by kben-ham         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = btc

OBJECT = $(MY_FILES:.cpp=.o)

CC = c++ -Wall -Wextra -Werror -std=c++98

MY_FILES =  main.cpp BitcoinExchange.cpp
all: $(NAME)

%.o: %.cpp BitcoinExchange.hpp
	$(CC) -o $@ -c  $< -I.

$(NAME): $(OBJECT) 
	$(CC) $^ -o $(NAME) -I.

clean:
	rm -f $(OBJECT)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY : all clean fclean re