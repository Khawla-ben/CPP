/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 12:29:58 by kben-ham          #+#    #+#             */
/*   Updated: 2024/01/08 15:00:02 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Form ok("First", 200, 10);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "****************\n";
	try
	{
		Bureaucrat a("ll", 11);
		Form ok("Fist", 5, 10);
		ok.beSigned(a);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "****************\n";
	try
	{
		Bureaucrat a("ll", 149);
		Form ok("First", 150, 10);
		std::cout << "Before " << ok.getbool() << std::endl;
		ok.beSigned(a);
		std::cout << "After "<< ok.getbool() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "****************\n";
	try
	{
		Bureaucrat a("ll", 149);
		Form ok("First", 150, 10);
		a.signForm(ok);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "****************\n";
	try
	{
		Bureaucrat a("ll", 19);
		Form ok("First", 1, 10);
		a.signForm(ok);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "**************" << std::endl;
	Form h("15861", 10, 3);
	std::cout << h ;
}