/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 18:56:26 by kben-ham          #+#    #+#             */
/*   Updated: 2023/12/17 13:08:32 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): Name("Default"), Grade(1)
{
	std::cout << "Constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : Name(name), Grade(grade)
{
	std::cout << "Constructor called (Para)" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &a)
{
	std::cout << "Copy Constructor Called" << std::endl;
	*this = a;
};

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &a)
{
	std::cout << "Copy Assingnement Operator Called" << std::endl;
	this->Grade = a.Grade;
	return *this;
};

void Bureaucrat::incrementGrade()
{
	this->Grade -= 1;
	if (this->Grade < 1)
		throw GradeTooHighException();
}

void Bureaucrat::decrementGrade()
{
	this->Grade += 1;
	if (this->Grade > 150)
		throw GradeTooLowException();
}

const int& Bureaucrat::getGrade() const
{
	return this->Grade;
}

const std::string& Bureaucrat::getName() const
{
	return this->Name;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor called" << std::endl;
}

std::ostream &operator<<(std::ostream &val, const Bureaucrat &a)
{
	val << a.getName() << ", bureaucrat grade " << a.getGrade() << "." << std::endl;
	return val;
}

Bureaucrat::GradeTooHighException::GradeTooHighException() throw(){}

Bureaucrat::GradeTooLowException::GradeTooLowException() throw(){}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade Too Low !");
}
const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade Too High !");
}