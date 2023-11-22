


#include "Zombie.hpp"

int main(int ac, char **av)
{
	(void)av;

	if (ac > 1)
	{
		std::cout << "Error: invalid arguments" << std::endl;
		return (1);
	}
	int i = 0;
	Zombie *objArray;

	objArray = zombieHorde(5, "khawla");
	while (i < 5)
		objArray[i++].announce();
	delete [] objArray;
}