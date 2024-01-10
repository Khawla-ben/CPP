/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 14:10:14 by kben-ham          #+#    #+#             */
/*   Updated: 2023/12/31 13:32:42 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>
class Bureaucrat;

class  Form
{
private:
	const std::string Name;
	bool isSigned;
	const int Grade_s;
	const int Grade_e;

public:

	Form();
	Form(const std::string &name, const int &grade_s, const int &grade_e);

	Form(const Form &val);
	Form &operator=(const Form &a);

	int getGrade_s() const;
	int getGrade_e() const;
	bool getbool() const;
	const std::string getName() const;
	
	void beSigned(Bureaucrat &a);
	~Form();
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

std::ostream &operator<<(std::ostream &val,const Form &a);
