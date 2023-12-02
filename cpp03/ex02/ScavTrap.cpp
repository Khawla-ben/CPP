/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 18:47:25 by kben-ham          #+#    #+#             */
/*   Updated: 2023/12/02 16:14:22 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


ScavTrap::ScavTrap() {
	std::cout << "Constructor of ScavTrap called (default)" << std::endl;
	this->Hit_points = 100;
	this->Energy_points = 50;
	this->Attack_damage = 20;
}

ScavTrap::ScavTrap(std::string Name)
{
	std::cout << "Constructor of ScavTrap called" << std::endl;
	this->Name = Name;
	this->Hit_points = 100;
	this->Energy_points = 50;
	this->Attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &val) : ClapTrap(val) {}

ScavTrap &ScavTrap::operator=(const ScavTrap &a)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &a)
	{
		this->Hit_points = a.Hit_points;
		this->Energy_points = a.Energy_points;
		this->Attack_damage = a.Attack_damage;
	}
	return *this;
}

void ScavTrap::attack(const std::string& target)
{
	if (Hit_points > 0 && Energy_points > 0)
	{
		std::cout <<  "ScavTrap " << Name << " attacks " <<  target << ", causing " << Attack_damage << " points of damage !"<< std::endl;
		this->Energy_points -= 1;
	}
	else
		std::cout << "ClapTrap " << Name << "can't do anything !!! \n" ;
}

void ScavTrap::guardGate()
{
	if(Hit_points > 0)
		std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
	else
		std::cout << "ClapTrap " << Name << "can't do anything !!! \n" ;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor of scavtrap called" << std::endl;
}
