/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 17:41:59 by kben-ham          #+#    #+#             */
/*   Updated: 2023/12/23 13:12:00 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 05)
{
	std::cout << "Constructor of PresidentialPardonForm called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &Name) : AForm(Name, 25, 05) {
	std::cout << "Constructor of PresidentialPardonForm called (Para)" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &val) : AForm(val) {
	std::cout << "Copy of PresidentialPardonForm Constructor Called " << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &a)
{
	(void)a;
	std::cout << "Copy Assingnement Operator of AForm Called " << std::endl;
	return *this;
}

void PresidentialPardonForm ::execute(Bureaucrat const & executor) const
{
	if (this->getbool() == 1 && executor.getGrade() <= this->getGrade_e())
		std::cout << this->getName() << " has been pardoned by Zaphod Beeblebrox .\n";
	else
		throw (AForm::GradeTooLowException());
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Destructor of PresidentialPardonForm called" << std::endl;
}