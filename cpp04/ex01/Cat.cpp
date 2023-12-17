/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 16:11:27 by kben-ham          #+#    #+#             */
/*   Updated: 2023/12/05 13:28:06 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Constructor of Cat called" << std::endl;
	this->attribute = new Brain();
	this->type= "Cat";
}

Cat::Cat(const Cat &val)
{
	std::cout << "Copy constructor called (Cat)" << std::endl;
	this->attribute = NULL;
	*this = val;
}

void Cat::makeSound() const
{
	std::cout << type << " is Meowing " << std::endl;
}

Cat &Cat::operator=(const Cat &a)
{
	std::cout << "Copy assignment operator called (Cat)" << std::endl;
	if (this != &a)
	{
		if (this->attribute)
			delete attribute;
		this->attribute = new Brain();
		*this->attribute = *a.attribute;
	}
	return *this;
}

Cat::~Cat()
{
	delete (attribute);
	std::cout << "Destructor of Cat called" << std::endl;
}