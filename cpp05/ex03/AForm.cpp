/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 14:27:30 by kben-ham          #+#    #+#             */
/*   Updated: 2023/12/19 13:03:36 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(): Name("Default"), Grade_s(1), Grade_e(1)
{
	isSigned = false;
	std::cout << "Constructor of AForm called" << std::endl;
}

AForm::AForm(const std::string &name, const int grade_s, const int grade_e) : Name(name), Grade_s(grade_s), Grade_e(grade_e)
{
	std::cout << "Constructor of AForm called (Para)" << std::endl;
	if (this->Grade_s < 1)
		throw AForm::GradeTooHighException();
	else if (this->Grade_s > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm &val) : Name(val.Name), Grade_s(val.Grade_s), Grade_e(val.Grade_e) 
{
	std::cout << "Copy of AForm Constructor Called" << std::endl;
	*this = val;
}

AForm &AForm::operator=(const AForm &a)
{
	std::cout << "Copy Assingnement Operator of AForm Called " << std::endl;
	this->isSigned = a.isSigned;
	const_cast<int&>(this->Grade_e) = a.Grade_e;
	const_cast<int&>(this->Grade_s) = a.Grade_s;
	const_cast<std::string&>(this->Name) = a.Name;
	return *this;
}

int AForm::getGrade_s() const
{
	return this->Grade_s;
}

int AForm::getGrade_e() const
{
	return this->Grade_e;
}

const std::string AForm::getName() const
{
	return this->Name;
}

bool AForm::getbool() const
{
	return this->isSigned;
}

void AForm::beSigned(Bureaucrat &a)
{
	if (this->Grade_s >= a.getGrade())
		this->isSigned = true;
	else
		throw AForm::GradeTooLowException();
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("Grade Too Low !");
}
const char* AForm::GradeTooHighException::what() const throw()
{
	return ("Grade Too High !");
}

AForm::~AForm()
{
	std::cout << "Destructor of AForm called" << std::endl;
}

std::ostream &operator<<(std::ostream &val, const AForm &a)
{
	val << "My name is " << a.getName() << " , my grade_s is " << a.getGrade_s()  << " , my grade_e is "  << a.getGrade_e() << " and isSigned is " << a.getbool() << std::endl;
	return val;
}
