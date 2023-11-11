

#include "Weapon.hpp"


Weapon::Weapon():
	type("") {}

Weapon::Weapon(const std::string& str):
	type(str) {}

void Weapon::setType(const std::string& new_type)
{
	this->type = new_type;
}

const std::string& Weapon::getType() const
{
	return this->type;
}

Weapon::~Weapon()
{
	std::cout << "end" << std::endl;
}