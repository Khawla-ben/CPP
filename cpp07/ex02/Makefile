# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/20 02:14:01 by kben-ham          #+#    #+#              #
#    Updated: 2024/01/20 02:14:07 by kben-ham         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Array

OBJECT = $(MY_FILES:.cpp=.o)

CC = c++ -Wall -Wextra -Werror -std=c++98

MY_FILES =  main.cpp
all: $(NAME)

%.o: %.cpp Array.hpp
	$(CC) -o $@ -c  $<

$(NAME): $(OBJECT) 
	$(CC) $^ -o $(NAME)

clean:
	rm -f $(OBJECT)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY : all clean fclean re