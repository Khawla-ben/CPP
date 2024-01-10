/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 12:29:58 by kben-ham          #+#    #+#             */
/*   Updated: 2024/01/08 15:43:41 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
	try
	{
		Intern someRandomIntern;
		Bureaucrat byr("tester", 1);
		AForm* rrf;
		std::string a = "Shrubbery Creation";
		std::string b = "Bender";
		rrf = someRandomIntern.makeForm(a, b);
		byr.executeForm(*rrf);
		byr.signForm(*rrf);
		byr.executeForm(*rrf);
		delete (rrf);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
		std::cout << "****************\n";
	try
	{
		Intern someRandomIntern;
		Bureaucrat byr("tester", 1);
		AForm* rrf;
		std::string a = "ooook";
		std::string b = "Bender";
		rrf = someRandomIntern.makeForm(a, b);
		delete (rrf);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}