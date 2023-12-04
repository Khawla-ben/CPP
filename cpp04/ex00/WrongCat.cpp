/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 20:42:33 by kben-ham          #+#    #+#             */
/*   Updated: 2023/12/02 20:47:11 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "Constructor of WrongCat called" << std::endl;
	this->type= "WrongCat";
}

WrongCat::WrongCat(std::string type)
{
	std::cout << "Constructor called (paramitrized)" << std::endl;
	this->type = type;
}

WrongCat::WrongCat(const WrongCat &val) : WrongAnimal(val) {}

void WrongCat::makeSound() const
{
	std::cout << type << " is Meowing " << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &a)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &a)
	{
		this->type = a.type;
	}
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "Destructor of Cat called" << std::endl;
}