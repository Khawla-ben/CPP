

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	if (N <= 0 || N > MAX) {
		std::cout << "Invalid Argument\n"; exit (1);
	}

	Zombie *Zombie_Array = new (std::nothrow) Zombie[N];

	if (Zombie_Array == NULL)
	{
		std::cout << "Allocation Failed\n"; exit (1);
	}

	for (int i = 0; i < N; i++) {
		Zombie_Array[i].setName(name);
	}
	return (Zombie_Array);
}