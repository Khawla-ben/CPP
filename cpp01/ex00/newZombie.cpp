

#include "Zombie.hpp"


Zombie* newZombie(std::string name)
{
	Zombie *obj = new (std::nothrow) Zombie;
	
	if (obj == NULL) {
		std::cout << "Allocation Failed\n"; exit (1);
	}

	obj->setName(name);
	return (obj);
}
