# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/26 18:53:21 by kben-ham          #+#    #+#              #
#    Updated: 2023/11/26 18:53:22 by kben-ham         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = replace

OBJECT = $(MY_FILES:.cpp=.o)

CC = c++ -Wall -Wextra -Werror -std=c++98

MY_FILES = main.cpp

all: $(NAME)

%.o: %.cpp 
	$(CC) -o $@ -c  $< 

$(NAME): $(OBJECT) 
	$(CC) $^ -o $(NAME)

clean:
	rm -f $(OBJECT) *.replace

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY : all clean fclean re
