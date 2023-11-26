/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 18:44:40 by kben-ham          #+#    #+#             */
/*   Updated: 2023/11/26 18:44:43 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


FragTrap::FragTrap() : ClapTrap() {}

FragTrap::FragTrap(std::string Name) : ClapTrap(Name)
{
	std::cout << "Constructor of FragTrap called" << std::endl;
	this->Hit_points = 100;
	this->Energy_points = 100;
	this->Attack_damage = 30;
}


FragTrap::FragTrap(const FragTrap &val) : ClapTrap(val) {}

FragTrap &FragTrap::operator=(const FragTrap &a)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &a) {
		this->Hit_points = a.Hit_points;
		this->Energy_points = a.Energy_points;
		this->Attack_damage = a.Attack_damage;
	}
	return *this;
}

void FragTrap::attack(const std::string& target)
{
	if (Hit_points >= 0 && Energy_points >= 0)
	{
		std::cout <<  "FragTrap " << Name << " attacks " <<  target << ", causing " << Attack_damage << " points of damage !"<< std::endl;
		this->Hit_points -= Attack_damage;
		this->Energy_points -= 1;
	}
}

void FragTrap::highFivesGuys()
{
	std::cout << "a positive high fives request ??" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor of FragTrap called" << std::endl;
}
