/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 18:52:30 by kben-ham          #+#    #+#             */
/*   Updated: 2023/11/26 18:52:33 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string& str, Weapon &a):
	name(str),
	my_weapon2(a) {}

void HumanA::setName(const std::string value)
{
	name = value;
}

const std::string& HumanA::getName() const
{
	return this->name;
}

void HumanA::attack()
{
	std::cout << getName() << " attacks with their " << my_weapon2.getType() << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "end" << std::endl;
}
