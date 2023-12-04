/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 16:11:27 by kben-ham          #+#    #+#             */
/*   Updated: 2023/12/03 15:00:13 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Constructor of Cat called" << std::endl;
	this->type= "Cat";
}

Cat::Cat(const Cat &val)
{
	std::cout << "Copy constructor called " << std::endl;
	*this = val;
}

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