/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 12:33:34 by kben-ham          #+#    #+#             */
/*   Updated: 2023/12/05 13:38:31 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Constructor of Brain called" << std::endl;
}


Brain::Brain(const Brain &val)
{
	std::cout << "Copy constructor called (Brain)" << std::endl;
	*this = val;
}

Brain &Brain::operator=(const Brain &a)
{
	std::cout << "Copy assignment operator called (Brain)" << std::endl;
	if (this != &a)
	{
		for(int i= 0; i < 100 ; i++)
		{
			this->ideas[i] = a.ideas[i];
		}
	}
	return *this;
}

Brain::~Brain()
{
	std::cout << "Destructor of Brain called" << std::endl;
}