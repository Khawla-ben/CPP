/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 17:41:59 by kben-ham          #+#    #+#             */
/*   Updated: 2023/12/31 14:26:41 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137)
{
	std::cout << "Constructor of ShrubberyCreationForm called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &Name) : AForm(Name, 145, 137) {
	std::cout << "Constructor of ShrubberyCreationForm called (Para)" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &val) : AForm(val) {
	std::cout << "Copy of ShrubberyCreationForm Constructor Called " << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &a)
{
	(void)a;
	std::cout << "Copy Assingnement Operator of AForm Called " << std::endl;
	return *this;
}

void ShrubberyCreationForm ::execute(Bureaucrat const &executor) const
{
	if (this->getbool() == 1 && executor.getGrade() <= this->getGrade_e())
	{
		std::ofstream file(this->getName() + "_shrubbery");
			file << "                  '.," << std::endl;
            file << "          'b      *" << std::endl;
            file << "           '$    #." << std::endl;
            file << "            $:   #:" << std::endl;
            file << "            *#  @):" << std::endl;
            file << "            :@,@):   ,.**:'" << std::endl;
            file << "  ,         :@@*: ..**'" << std::endl;
            file << "   #o.    .:(@.@*" << std::endl;
            file << "      'bq,..:,@@*'   ,*" << std::endl;
            file << "      ,p$q8,:@)'  .p*'" << std::endl;
            file << "     '    '@@Pp@@*'" << std::endl;
            file << "           Y7'.'" << std::endl;
            file << "          :@):." << std::endl;
            file << "         .:@:'." << std::endl;
            file << "       .::(@:." ;
	}
	else
		throw (AForm::GradeTooLowException());
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Destructor of ShrubberyCreationForm called" << std::endl;
}