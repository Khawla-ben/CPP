/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 17:42:01 by kben-ham          #+#    #+#             */
/*   Updated: 2023/12/20 12:03:21 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AForm.hpp"


class ShrubberyCreationForm  : public AForm
{
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(const std::string &Name);

	ShrubberyCreationForm(const ShrubberyCreationForm &val);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &a);
	
	void execute(Bureaucrat const & executor) const ;
	~ShrubberyCreationForm();
};