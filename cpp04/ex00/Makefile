# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/01 15:07:28 by kben-ham          #+#    #+#              #
#    Updated: 2023/12/02 20:49:05 by kben-ham         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Animal

OBJECT = $(MY_FILES:.cpp=.o)

CC = c++ -Wall -Wextra -Werror -std=c++98

MY_FILES = main.cpp  Cat.cpp Dog.cpp Animal.cpp WrongAnimal.cpp WrongCat.cpp
all: $(NAME)

%.o: %.cpp  Dog.hpp Animal.hpp Cat.hpp WrongAnimal.hpp WrongCat.hpp
	$(CC) -o $@ -c  $< 

$(NAME): $(OBJECT) 
	$(CC) $^ -o $(NAME)

clean:
	rm -f $(OBJECT)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY : all clean fclean re