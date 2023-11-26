/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 18:52:37 by kben-ham          #+#    #+#             */
/*   Updated: 2023/11/26 18:52:40 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanB.hpp"

HumanB::HumanB(const std::string& str):
	name(str),
	my_weapon1(NULL) {}

void HumanB::setName(const std::string value)
{
	name = value;
}

const std::string& HumanB::getName() const
{
	return this->name;
}

void HumanB::attack()
{

	if ( my_weapon1 == NULL )
		std::cout << "NO weapon" << std::endl;
	else
		std::cout << getName() << " attacks with their " << my_weapon1->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &a)
{
	my_weapon1 = &a;
}

HumanB::~HumanB()
{
	std::cout << "end" << std::endl;
}
