


#include "Zombie.hpp"

int main(int ac, char **av)
{
	(void)av;
	if (ac > 1) {
		std::cout << "Error: invalid arguments" << std::endl;
		return (1);
	}
	Zombie h_1;
	Zombie *h_2;

	h_1.setName("foo");
	h_1.announce();

	randomChump("foo1");
	h_2 = newZombie("khawla");
	delete (h_2);
}