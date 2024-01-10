/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 13:01:47 by kben-ham          #+#    #+#             */
/*   Updated: 2023/12/23 13:11:51 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern()
{
	std::cout << "Constructor of Intern called" << std::endl;
}

Intern::Intern(const Intern &val)
{
	std::cout << "Copy Constructor of Intern Called" << std::endl;
	*this = val;
}

Intern &Intern::operator=(const Intern &a)
{
	(void)a;
	std::cout << "Copy Assingnement Operator of Intern Called " << std::endl;
	return *this;
}

int check_target(std::string target)
{
	std::string a[3];

	a[0] = "robotomy request";
	a[1] = "Presidential Pardon";
	a[2] = "Shrubbery Creation";
	int i = 0;
	while(i <= 3)
	{
		if (a[i] == target)
			return (i);
		i++;
	}
	return (-1);
}

AForm* Intern::makeForm(std::string &target, std::string &Name)
{
	int userInput;

	userInput = check_target(target);

	switch (userInput) {
		case 0:
		{
			std::cout << "Intern creates " << target << std::endl;
			return (new RobotomyRequestForm(Name));
		}
		case 1:
		{
			std::cout << "Intern creates" << target << std::endl;
			return (new PresidentialPardonForm(Name));
		}
		case 2:
		{
			std::cout << "Intern creates" << target << std::endl;
			return (new ShrubberyCreationForm(Name));
		}
		default:
		{
			std::cout << "Invalid choice.\n";
			throw FormNotFoundException();
		}
	}
}

Intern::~Intern()
{
	std::cout << "Destructor of Intern called" << std::endl;
}

const char* Intern::FormNotFoundException::what() const throw()
{
	return ("Form Not Found !");
}
