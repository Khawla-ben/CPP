# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/01 15:07:28 by kben-ham          #+#    #+#              #
#    Updated: 2023/12/01 16:36:46 by kben-ham         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



NAME = Animal

OBJECT = $(MY_FILES:.cpp=.o)

CC = c++ -Wall -Wextra -Werror -std=c++98

MY_FILES = main.cpp  Cat.cpp Dog.cpp Animal.cpp
all: $(NAME)

%.o: %.cpp  Dog.hpp Animal.hpp Cat.hpp
	$(CC) -o $@ -c  $< 

$(NAME): $(OBJECT) 
	$(CC) $^ -o $(NAME)

clean:
	rm -f $(OBJECT)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY : all clean fclean re