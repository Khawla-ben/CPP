

#pragma once


#include <iostream>
#include "Weapon.hpp"

class  HumanB
{
private:
	std::string name;
	Weapon my_weapon1;
public:
	HumanB();

	void setName(const std::string value);
	void attack(void);
	void setWeapon(Weapon a);
	const std::string& getName()const;

	~HumanB();
};
