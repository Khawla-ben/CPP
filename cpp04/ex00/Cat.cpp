/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 16:11:27 by kben-ham          #+#    #+#             */
/*   Updated: 2023/12/01 17:41:39 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Constructor of Cat called" << std::endl;
	this->type= "Cat";
}


Cat::Cat(std::string type)
{
	std::cout << "Constructor called (paramitrized)" << std::endl;
	this->type = type;
}

Cat::Cat(const Cat &val) : Animal(val) {}


void Cat::makeSound() const
{
	std::cout << type << " is Meowing " << std::endl;
}

Cat &Cat::operator=(const Cat &a)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &a)
	{
		this->type = a.type;
	}
	return *this;
}

Cat::~Cat()
{
	std::cout << "Destructor of Cat called" << std::endl;
}