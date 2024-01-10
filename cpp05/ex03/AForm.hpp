/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 14:10:14 by kben-ham          #+#    #+#             */
/*   Updated: 2023/12/31 14:22:12 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>
class Bureaucrat;


class  AForm
{
private:
	std::string const Name;
	bool isSigned;
	const int Grade_s;
	const int Grade_e;

public:

	AForm();
	AForm(const std::string &name, int grade_s, int grade_e);

	AForm(const AForm &val);
	AForm &operator=(const AForm &a);

	int getGrade_s() const;
	int getGrade_e() const;
	bool getbool() const;
	const std::string getName() const;
	virtual void execute(Bureaucrat const & executor) const = 0;
	void beSigned(Bureaucrat &a);

	virtual ~AForm();
	//Nested class
	class GradeTooHighException : public std::exception
	{
		public:
		const char* what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public:
		const char* what() const throw();
	};
};

std::ostream &operator<<(std::ostream &val,const AForm &a);
