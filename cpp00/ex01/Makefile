# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/07 17:18:46 by kben-ham          #+#    #+#              #
#    Updated: 2023/11/09 15:32:14 by kben-ham         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Phonebook

CC = c++

CFLAGS =  -Wall -Wextra -Werror -std=c++98

RM = rm -rf

MY_FILES =  main.cpp Contact.cpp PhoneBook.cpp

OBJECT = $(MY_FILES:.cpp=.o)

HEADERS = Contact.hpp PhoneBook.hpp

all: $(NAME)

%.o: %.cpp $(HEADERS)
	$(CC)  $(CFLAGS) -o $@ -c  $<

$(NAME): $(OBJECT)
	$(CC)  $(CFLAGS) $^ -o $(NAME)

clean:
	@$(RM) $(OBJECT)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY : all clean fclean re