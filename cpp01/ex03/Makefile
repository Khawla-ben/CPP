# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/26 18:52:53 by kben-ham          #+#    #+#              #
#    Updated: 2023/11/26 18:52:58 by kben-ham         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = weapon

OBJECT = $(MY_FILES:.cpp=.o)

CC = c++ -Wall -Wextra -Werror -std=c++98

MY_FILES = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

all: $(NAME)

%.o: %.cpp Weapon.hpp HumanA.hpp HumanB.hpp
	$(CC) -o $@ -c  $< 

$(NAME): $(OBJECT) 
	$(CC) $^ -o $(NAME)

clean:
	rm -f $(OBJECT)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY : all clean fclean re
