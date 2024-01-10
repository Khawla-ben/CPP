/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 14:27:30 by kben-ham          #+#    #+#             */
/*   Updated: 2023/12/31 13:32:18 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(): Name("Default"), Grade_s(1), Grade_e(1)
{
	isSigned = false;
	std::cout << "Constructor of Form called" << std::endl;
}

Form::Form(const std::string &name, const int &grade_s, const int &grade_e) : Name(name), Grade_s(grade_s), Grade_e(grade_e)
{
	std::cout << "Constructor of Form called (Para)" << std::endl;
	if (this->Grade_s < 1)
		throw Form::GradeTooHighException();
	else if (this->Grade_s > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form &val) : Name(val.Name), Grade_s(val.Grade_s), Grade_e(val.Grade_e) 
{
	std::cout << "Copy of Form Constructor Called" << std::endl;
	*this = val;
}

Form &Form::operator=(const Form &a)
{
	std::cout << "Copy Assingnement Operator of Form Called " << std::endl;
	this->isSigned = a.isSigned;
	const_cast<int&>(this->Grade_e) = a.Grade_e;
	const_cast<int&>(this->Grade_s) = a.Grade_s;
	const_cast<std::string&>(this->Name) = a.Name;
	return *this;
}

int Form::getGrade_s() const
{
	return this->Grade_s;
}

int Form::getGrade_e() const
{
	return this->Grade_e;
}

const std::string Form::getName() const
{
	return this->Name;
}

bool Form::getbool() const
{
	return this->isSigned;
}

void Form::beSigned(Bureaucrat &a)
{
	if (this->Grade_s >= a.getGrade())
		this->isSigned = true;
	else
		throw Form::GradeTooLowException();
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade Too Low !");
}
const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade Too High !");
}

Form::~Form()
{
	std::cout << "Destructor of Form called" << std::endl;
}

std::ostream &operator<<(std::ostream &val, const Form &a)
{
	val << "My name is " << a.getName() << " , my grade_s is " << a.getGrade_s()  << " , my grade_e is "  << a.getGrade_e() << " and isSigned is " << a.getbool() << std::endl;
	return val;
}
