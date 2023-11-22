


#include "Zombie.hpp"

int main()
{
	Zombie obj1("foo");
	Zombie *obj2;

	obj1.announce();

	randomChump("foo1");
	obj2 = newZombie("khawla");
	obj2->announce();
	delete obj2;
}