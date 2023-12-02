/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 18:44:40 by kben-ham          #+#    #+#             */
/*   Updated: 2023/12/02 15:36:20 by kben-ham         ###   ########.fr       */
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

void FragTrap::highFivesGuys()
{
	if (Hit_points > 0)
		std::cout << "Give me some high fives!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor of FragTrap called" << std::endl;
}
