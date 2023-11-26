/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 18:53:07 by kben-ham          #+#    #+#             */
/*   Updated: 2023/11/26 18:53:10 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Weapon.hpp"


Weapon::Weapon():
	type("") {}

Weapon::Weapon(const std::string& str):
	type(str) {}

void Weapon::setType(const std::string& new_type)
{
	this->type = new_type;
}

const std::string& Weapon::getType() const
{
	return this->type;
}

Weapon::~Weapon()
{
	std::cout << "end" << std::endl;
}