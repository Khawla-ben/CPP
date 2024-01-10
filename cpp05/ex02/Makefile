# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/08 18:52:53 by kben-ham          #+#    #+#              #
#    Updated: 2023/12/20 12:02:43 by kben-ham         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = AForm

OBJECT = $(MY_FILES:.cpp=.o)

CC = c++ -Wall -Wextra -Werror -std=c++98

MY_FILES = main.cpp Bureaucrat.cpp AForm.cpp RobotomyRequestForm.cpp  PresidentialPardonForm.cpp ShrubberyCreationForm.cpp
all: $(NAME)

%.o: %.cpp Bureaucrat.hpp AForm.hpp RobotomyRequestForm.hpp  PresidentialPardonForm.hpp ShrubberyCreationForm.hpp
	$(CC) -o $@ -c  $< 

$(NAME): $(OBJECT) 
	$(CC) $^ -o $(NAME)

clean:
	rm -f $(OBJECT) *_shrubbery

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY : all clean fclean re