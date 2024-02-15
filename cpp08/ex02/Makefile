# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/13 21:21:00 by kben-ham          #+#    #+#              #
#    Updated: 2024/02/15 11:14:43 by kben-ham         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = MutantStack

OBJECT = $(MY_FILES:.cpp=.o)

CC = c++ -Wall -Wextra -Werror -std=c++98

MY_FILES =  main.cpp
all: $(NAME)

%.o: %.cpp MutantStack.hpp MutantStack.tpp
	$(CC) -o $@ -c  $<

$(NAME): $(OBJECT) 
	$(CC) $^ -o $(NAME) 

clean:
	rm -f $(OBJECT)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY : all clean fclean re