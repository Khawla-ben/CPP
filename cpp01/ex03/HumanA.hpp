

#pragma once


#include <iostream>
#include "Weapon.hpp"

class  HumanA
{
private:
	std::string name;
	Weapon &my_weapon2;
public:
	HumanA(const std::string& str, Weapon &a);

	void setName(const std::string value);
	void attack();
	const std::string& getName()const;

	~HumanA();
};