


#include "Zombie.hpp"

int main(int ac, char **av)
{
	int i = 0;
	Zombie *objArray;
	(void)av;

	if (ac > 1)
	{
		std::cout << "Error: invalid arguments" << std::endl;
		return (1);
	}
	objArray = zombieHorde(2, "khawla");
	while (i < 2)
	{
		objArray[i++].announce();
	}
	delete[] objArray;
	// system("leaks Moar_brainz");
}