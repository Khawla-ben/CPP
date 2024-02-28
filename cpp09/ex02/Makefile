# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/26 13:28:32 by kben-ham          #+#    #+#              #
#    Updated: 2024/02/26 13:29:03 by kben-ham         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PmergeMe

OBJECT = $(MY_FILES:.cpp=.o)

CC = c++ -Wall -Wextra -Werror -std=c++98

MY_FILES =  main.cpp PmergeMe.cpp
all: $(NAME)

%.o: %.cpp PmergeMe.hpp
	$(CC) -o $@ -c  $< -I.

$(NAME): $(OBJECT) 
	$(CC) $^ -o $(NAME) -I.

clean:
	rm -f $(OBJECT)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY : all clean fclean re