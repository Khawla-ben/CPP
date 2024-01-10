/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 22:49:40 by kben-ham          #+#    #+#             */
/*   Updated: 2023/12/31 14:24:55 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AForm.hpp"


class PresidentialPardonForm  : public AForm
{
public:
	PresidentialPardonForm();
	PresidentialPardonForm(const std::string &Name);

	PresidentialPardonForm(const PresidentialPardonForm &val);
	PresidentialPardonForm &operator=(const PresidentialPardonForm &a);
	
	void execute(Bureaucrat const &executor) const ;
	~PresidentialPardonForm();
};
