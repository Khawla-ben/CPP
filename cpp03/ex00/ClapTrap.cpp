/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 18:44:23 by kben-ham          #+#    #+#             */
/*   Updated: 2023/12/02 16:12:10 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Constructor called" << std::endl;
	this->Name = "Default";
	this->Hit_points = 10;
	this->Energy_points = 10;
	this->Attack_damage = 0; 
}

ClapTrap::ClapTrap(std::string Name)
{
	std::cout << "Constructor called (paramitrized)" << std::endl;
	this->Name = Name;
	this->Hit_points = 10;
	this->Energy_points = 10;
	this->Attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &val)
{
	std::cout << "Copy constructor called " << std::endl;
	*this = val;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &a)
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

void ClapTrap::attack(const std::string& target)
{
	if (Hit_points > 0 && Energy_points > 0)
	{
		std::cout << "ClapTrap " << Name << " attacks " <<  target << ", causing " << Attack_damage << " points of damage !"<< std::endl;
		this->Energy_points -= 1;
	}
	else
		std::cout << "ClapTrap " << Name << "can't do anything !!! \n" ;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (Hit_points > 0)
	{
		std::cout << "ClapTrap " << Name << " Take Damage " << "of " << amount << " points !"<< std::endl;
		this->Hit_points -=amount;
	}
	else
		std::cout << "ClapTrap " << Name << "can't do anything !!! \n" ;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (Hit_points > 0 && Energy_points > 0)
	{
		std::cout << "ClapTrap " << Name << " Repaired itself so it gets " <<  amount << " of points !"<< std::endl;
		this->Hit_points += amount;
		this->Energy_points -= 1;
	}
	else
		std::cout << "ClapTrap " << Name << "can't do anything !!! \n" ;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}