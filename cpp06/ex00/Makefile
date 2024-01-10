# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/22 10:47:22 by kben-ham          #+#    #+#              #
#    Updated: 2023/12/26 16:35:50 by kben-ham         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = convert

OBJECT = $(MY_FILES:.cpp=.o)

CC = c++ -Wall -Wextra -Werror -std=c++98 -g

MY_FILES = ScalarConverter.cpp main.cpp utils.cpp
all: $(NAME)

%.o: %.cpp ScalarConverter.hpp
	$(CC) -o $@ -c  $< 

$(NAME): $(OBJECT) 
	$(CC) $^ -o $(NAME)

clean:
	rm -f $(OBJECT)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY : all clean fclean re