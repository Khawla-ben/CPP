/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 16:17:16 by kben-ham          #+#    #+#             */
/*   Updated: 2023/12/05 11:35:42 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Constructor of Dog called" << std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog &val)
{
	std::cout << "Copy constructor called " << std::endl;
	*this = val;
}

void Dog::makeSound() const
{
	std::cout << type << " is Barking" << std::endl;
}

Dog &Dog::operator=(const Dog &a)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &a)
	{
		this->type = a.type;
	}
	return *this;
}

Dog::~Dog()
{
	std::cout << "Destructor of Dog called" << std::endl;
}