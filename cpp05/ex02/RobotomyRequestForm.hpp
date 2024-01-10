/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 10:22:41 by kben-ham          #+#    #+#             */
/*   Updated: 2024/01/07 20:08:31 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <cstdlib>
#include<time.h>
#include "AForm.hpp"


class RobotomyRequestForm  : public AForm
{
private :
	static int num;

public:
	RobotomyRequestForm();
	RobotomyRequestForm(const std::string &Name);

	RobotomyRequestForm(const RobotomyRequestForm &val);
	RobotomyRequestForm &operator=(const RobotomyRequestForm &a);
	
	void execute(Bureaucrat const & executor) const ;
	~RobotomyRequestForm();
};