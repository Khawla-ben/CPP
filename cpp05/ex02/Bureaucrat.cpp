/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 18:56:26 by kben-ham          #+#    #+#             */
/*   Updated: 2024/01/08 15:24:24 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat(): Name("Default"), Grade(1)
{
	std::cout << "Constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : Name(name), Grade(grade)
{
	std::cout << "Constructor called (Para)" << std::endl;
	if (this->Grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->Grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &a)
{
	std::cout << "Copy Constructor Called" << std::endl;
	*this = a;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &a)
{
	std::cout << "Copy Assingnement Operator Called" << std::endl;
	this->Grade = a.Grade;
	const_cast<std::string&>(this->Name) = a.Name;
	return *this;
}

void Bureaucrat::incrementGrade()
{
	this->Grade -= 1;
	if (this->Grade < 1)
		throw Bureaucrat::GradeTooHighException();
}
void Bureaucrat::signForm(AForm &a)
{
	try
	{
		a.beSigned(*this);
		std::cout << this->getName() << " signed " << a.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << this->getName() << " couldn't signed " << a.getName() << " because " << e.what() << std::endl;
	}
}

void Bureaucrat::decrementGrade()
{
	this->Grade += 1;
	if (this->Grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

int Bureaucrat::getGrade() const
{
	return this->Grade;
}

const std::string Bureaucrat::getName() const
{
	return this->Name;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor called" << std::endl;
}

std::ostream &operator<<(std::ostream &val, const Bureaucrat &a)
{
	val << a.getName() << " , bureaucrat grade " << a.getGrade() << " ." << std::endl;
	return val;
}

void Bureaucrat::executeForm(AForm const &form)
{
	try
	{
		form.execute(*this);
		std::cout << this->getName() << " execute " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << this->getName() << " can't execute " << form.getName() << std::endl;
		std::cerr << e.what() << '\n';
	}
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade Too Low !");
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade Too High !");
}
