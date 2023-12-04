/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 16:03:58 by kben-ham          #+#    #+#             */
/*   Updated: 2023/12/04 21:02:35 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Constructor of Animal called" << std::endl;
	this->type= "Animal";
}


Animal::Animal(std::string type)
{
	std::cout << "Constructor called (paramitrized)" << std::endl;
	this->type = type;
}

Animal::Animal(const Animal &val)
{
	std::cout << "Copy constructor called " << std::endl;
	*this = val;
}

const std::string& Animal::getType() const
{
	return this->type;
}

Animal &Animal::operator=(const Animal &a)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &a)
	{
		this->type = a.type;
	}
	return *this;
}

Animal::~Animal()
{
	std::cout << "Destructor of Animal called" << std::endl;
}