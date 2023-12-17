/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 12:29:58 by kben-ham          #+#    #+#             */
/*   Updated: 2023/12/17 13:44:54 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat a("ll", 150);
		std::cout << a.getName() << std::endl;
		std::cout << a.getGrade() << std::endl;
		a.decrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "**************" << std::endl;
	try
	{
		Bureaucrat ok("B", 1);
		std::cout << ok.getName() << std::endl;
		std::cout << ok.getGrade() << std::endl;
		ok.incrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "**************" << std::endl;
	try
	{
		Bureaucrat ok("B", -1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "**************" << std::endl;
	Bureaucrat h;
	std::cout<< h ;
	
}