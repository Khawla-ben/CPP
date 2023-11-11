

#include "HumanB.hpp"

HumanB::HumanB(const std::string& str):
	name(str) {}

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
	std::cout << getName() << " attacks with their " << my_weapon1->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &a)
{
	my_weapon1 = &a;
}

HumanB::~HumanB()
{
	std::cout << "end" << std::endl;
}
