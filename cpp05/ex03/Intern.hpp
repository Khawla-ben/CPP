/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 13:02:09 by kben-ham          #+#    #+#             */
/*   Updated: 2023/12/23 13:11:45 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>
#include "AForm.hpp"

class  Intern
{
public:

	Intern();

	Intern(const Intern &val);
	Intern &operator=(const Intern &a);

	AForm* makeForm(std::string &target, std::string &Name);
	~Intern();

	class FormNotFoundException : public std::exception
	{
		public:
		const char* what() const throw();
	};
};
