


#include "Zombie.hpp"

int main()
{
	Zombie h_1;
	Zombie *h_2;

	h_1.setName("foo");
	h_1.announce();

	randomChump("foo1");
	h_2 = newZombie("khawla");
	delete (h_2);
}