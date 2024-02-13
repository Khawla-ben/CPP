# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/13 21:21:00 by kben-ham          #+#    #+#              #
#    Updated: 2024/02/13 21:21:17 by kben-ham         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = MutantStack

OBJECT = $(MY_FILES:.cpp=.o)

CC = c++ -Wall -Wextra -Werror -std=c++98

MY_FILES =  main.cpp MutantStack.cpp
all: $(NAME)

%.o: %.cpp MutantStack.hpp
	$(CC) -o $@ -c  $< -I.

$(NAME): $(OBJECT) 
	$(CC) $^ -o $(NAME) -I.

clean:
	rm -f $(OBJECT)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY : all clean fclean re