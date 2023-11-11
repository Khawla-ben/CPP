

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	int i = 0;

	Zombie *Zombie_Array = new Zombie[N];
	while (i < N)
	{
		Zombie_Array[i++].setName(name);
	}
	return (Zombie_Array);
}