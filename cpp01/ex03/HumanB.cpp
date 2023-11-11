

#include "HumanB.hpp"

HumanB::HumanB():
	name("") {}

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
	std::cout << getName() << "attacks with their" << my_weapon1.getType();
}

void HumanB::setWeapon(Weapon a)
{
	my_weapon1 = a;
}

HumanB::~HumanB()
{
	std::cout << "end" << std::endl;
}
