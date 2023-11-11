



#include "HumanA.hpp"

HumanA::HumanA(const std::string& str, Weapon &a):
	name(str),
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
	std::cout << getName() << " attacks with their " << my_weapon2.getType() << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "end" << std::endl;
}
