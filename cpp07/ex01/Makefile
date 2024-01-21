# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/19 05:28:54 by kben-ham          #+#    #+#              #
#    Updated: 2024/01/19 06:35:34 by kben-ham         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = Iter

OBJECT = $(MY_FILES:.cpp=.o)

CC = c++ -Wall -Wextra -Werror -std=c++98

MY_FILES =  main.cpp
all: $(NAME)

%.o: %.cpp Iter.hpp
	$(CC) -o $@ -c  $<

$(NAME): $(OBJECT) 
	$(CC) $^ -o $(NAME)

clean:
	rm -f $(OBJECT)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY : all clean fclean re