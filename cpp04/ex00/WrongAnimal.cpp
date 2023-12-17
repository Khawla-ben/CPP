/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 20:42:31 by kben-ham          #+#    #+#             */
/*   Updated: 2023/12/05 13:37:09 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "Constructor of WrongAnimal called" << std::endl;
	this->type= "WrongAnimal";
}

WrongAnimal::WrongAnimal(std::string type)
{
	std::cout << "Constructor called (paramitrized)" << std::endl;
	this->type = type;
}

WrongAnimal::WrongAnimal(const WrongAnimal &val)
{
	std::cout << "Copy constructor called (WrongAnimal)" << std::endl;
	*this = val;
}

void WrongAnimal::makeSound() const
{
	std::cout << type << " is making his own Sound" << std::endl;
}

const std::string& WrongAnimal::getType() const
{
	return this->type;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &a)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &a)
	{
		this->type = a.type;
	}
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor of WrongAnimal called" << std::endl;
}