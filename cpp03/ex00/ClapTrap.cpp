


#include "ClapTrap.hpp"


ClapTrap::ClapTrap(std::string Name)
{

	std::cout << "Constructor called" << std::endl;
	this->Name = Name;
	this->Hit_points = 10;
	this->Energy_points = 10;
	this->Attack_damage = 0;
}


ClapTrap &ClapTrap::operator=(const ClapTrap &a)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &a) { //self-assignment 
		this->Hit_points = a.Hit_points;
		this->Energy_points = a.Energy_points;
		this->Attack_damage = a.Attack_damage;
	}
	return *this;
}


void ClapTrap::attack(const std::string& target)
{
	if (Hit_points <= 0 && Energy_points <= 0)
	{
		std::cout << "ClapTrap " << Name << "attacks " <<  target << ", causing" << Attack_damage << "points of damage !"<< std::endl;
		this->Hit_points -= Attack_damage;
		this->Energy_points -= 1;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << Name << "Repaired " <<  amount << "of points !"<< std::endl;
	this->Attack_damage += amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (Hit_points <= 0 && Energy_points <= 0)
	{
		std::cout << "ClapTrap " << Name << "Repaired itself so it gets " <<  amount << "of points !"<< std::endl;
		this->Hit_points += amount;
		this->Energy_points -= 1;
	}
}

ClapTrap::~ClapTrap()
{
	std::cout << "Desstructor called" << std::endl;
}