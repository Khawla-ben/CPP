/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 18:52:08 by kben-ham          #+#    #+#             */
/*   Updated: 2023/12/31 14:23:58 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>

class AForm;
class  Bureaucrat
{
private:
	const std::string Name;
	int Grade;

public:

	Bureaucrat();
	Bureaucrat(const std::string &Name, int Grade);

	Bureaucrat(const Bureaucrat &val);
	Bureaucrat &operator=(const Bureaucrat &a);

	
	void incrementGrade();
	void decrementGrade();
	int	getGrade() const;
	const std::string getName() const;
	void executeForm(AForm const &form);

	void signForm(AForm &a);
	~Bureaucrat();
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

std::ostream &operator<<(std::ostream &val,const Bureaucrat &a);
