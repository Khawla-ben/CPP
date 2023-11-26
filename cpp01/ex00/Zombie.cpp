/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 18:51:21 by kben-ham          #+#    #+#             */
/*   Updated: 2023/11/26 18:51:23 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"


Zombie::Zombie():
	name("") {}

Zombie::Zombie(const std::string& str):
	name(str) {}

void Zombie::setName(const std::string value)
{
	name = value;
}

const std::string& Zombie::getName() const
{
	return this->name;
}

void Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..."<< std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Destructor: " << name << std::endl;
}
