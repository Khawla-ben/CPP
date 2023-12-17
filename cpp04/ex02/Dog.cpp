/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 16:17:16 by kben-ham          #+#    #+#             */
/*   Updated: 2023/12/05 13:39:34 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Constructor of Dog called" << std::endl;
		this->attribute = new Brain();
		this->type= "Dog";
}

Dog::Dog(const Dog &val)
{
	std::cout << "Copy constructor called (Dog)" << std::endl;
	this->attribute = NULL;
	*this = val;
}

void Dog::makeSound() const
{
	std::cout << type << " is Barking" << std::endl;
}

Dog &Dog::operator=(const Dog &a)
{
	std::cout << "Copy assignment operator called (Dog)" << std::endl;
	if (this != &a)
	{
		if (this->attribute)
			delete attribute;
		this->attribute = new Brain();
		*this->attribute = *a.attribute;
	}
	return *this;
}

Dog::~Dog()
{
	delete (attribute);
	std::cout << "Destructor of Dog called" << std::endl;
}