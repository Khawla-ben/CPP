

#include "Zombie.hpp"


Zombie::Zombie():
	name("") {}

void Zombie::setName(const std::string value)
{
	name = value;
}

const std::string& Zombie::getName() const
{
	return this->name;
}

void Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..."<< std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Destructor: " << name << std::endl;
}
