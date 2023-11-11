



#include "HumanA.hpp"

HumanA::HumanA(Weapon *a):
	name(""),
	my_weapon2(a) {}

void HumanA::setName(const std::string value)
{
	name = value;
}

const std::string& HumanA::getName() const
{
	return this->name;
}

void HumanA::attack()
{
	std::cout << getName() << "attacks with their" << my_weapon2.getType();
}

HumanA::~HumanA()
{
	std::cout << "end" << std::endl;
}
