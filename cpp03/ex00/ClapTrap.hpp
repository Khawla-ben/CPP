



#pragma once

#include <iostream>


class  ClapTrap
{
private:

	std::string Name;
	int Hit_points;//represent the health of the ClapTrap
	int Energy_points;
	int Attack_damage;

public:

	ClapTrap(std::string Name);

	ClapTrap(const ClapTrap &val);
	ClapTrap &operator=(const ClapTrap &a);//Copy assignment operator


	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	~ClapTrap();
};