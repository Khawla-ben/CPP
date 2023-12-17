/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 18:52:08 by kben-ham          #+#    #+#             */
/*   Updated: 2023/12/17 13:25:34 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <exception>


class  Bureaucrat
{
private:
	std::string const Name;
	int Grade;

public:

	Bureaucrat();
	Bureaucrat(const std::string &Name, int Grade);

	Bureaucrat(const Bureaucrat &val);
	Bureaucrat &operator=(const Bureaucrat &a);

	
	void incrementGrade();
	void decrementGrade();
	int	getGrade() const;
	const std::string& getName() const;
	~Bureaucrat();
	//Nested class
	class GradeTooHighException : public std::exception
	{
		public:
		GradeTooHighException() throw();
		const char* what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public:
		GradeTooLowException() throw();
		const char* what() const throw();
	};
};

std::ostream &operator<<(std::ostream &val,const Bureaucrat &a);


