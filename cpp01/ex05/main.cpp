


#include <iostream>
#include "Harl.hpp"





int main(int ac, char **av)
{
	(void)av;
	if (ac > 1)
	{
		std::cout << "Error: invalid arguments" << std::endl;
		return (1);
	}

	Harl *obj = new (std::nothrow) Harl;
	if (obj == NULL)
		std::cout << "Allocation Failed\n"; exit (1);
	std::string level;

	std::cout << "Enter a choice (DEBUG, INFO, WARNING, ERROR): ";
	std::cin >> level;

	if (std::cin.fail())
	{
		std::cerr << "Invalid input.\n";
		delete obj;
		return 1;
	}
	obj->complain(level);
	delete obj;

	return 0;
}