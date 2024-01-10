/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 12:29:58 by kben-ham          #+#    #+#             */
/*   Updated: 2024/01/08 15:51:51 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	try
	{
		RobotomyRequestForm a("Facture");
		Bureaucrat h("ok", 120);
		h.signForm(a);
		a.execute(h);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "****************\n";
	try
	{
		RobotomyRequestForm a("Facture");
		Bureaucrat h("ok", 1);
		h.signForm(a);
		a.execute(h);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "****************\n";
	try
	{
		PresidentialPardonForm a("P_Form");
		Bureaucrat h("ok", 15);
		h.signForm(a);
		a.execute(h);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "****************\n";
	try
	{
		PresidentialPardonForm a("P_Form");
		Bureaucrat h("ok", 2);
		h.signForm(a);
		a.execute(h);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "****************\n";
	try
	{
		ShrubberyCreationForm a("S_Form");
		Bureaucrat h("ok", 10);
		h.signForm(a);
		a.execute(h);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "****************\n";
	try
	{
		ShrubberyCreationForm a("Form");
		Bureaucrat h("ok", 10);
		// h.signForm(a);
		h.executeForm(a);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}