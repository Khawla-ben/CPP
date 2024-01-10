/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 22:53:02 by kben-ham          #+#    #+#             */
/*   Updated: 2024/01/08 15:09:53 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45)
{
	
	std::cout << "Constructor of RobotomyRequestForm called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &Name) : AForm(Name, 72, 45) {
	std::cout << "Constructor of RobotomyRequestForm called (Para)" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &val) : AForm(val) {
	std::cout << "Copy of RobotomyRequestForm Constructor Called " << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &a)
{
	(void)a;
	std::cout << "Copy Assingnement Operator of AForm Called " << std::endl;
	return *this;
}

void RobotomyRequestForm ::execute(Bureaucrat const & executor) const
{
	if (this->getbool() == 1 && executor.getGrade() <= this->getGrade_e())
	{
		srand(time(0));
		int num = rand();
		if ((num % 2) == 0)
			std::cout << this->getName() << " has been robotomized\n";
		else
			std::cout << this->getName() << " has been failed\n";
	}
	else
		throw (AForm::GradeTooLowException());
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Destructor of RobotomyRequestForm called" << std::endl;
}