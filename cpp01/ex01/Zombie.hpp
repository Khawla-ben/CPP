

#pragma once

#include <iostream>

#define MAX_INT 500

class  Zombie
{
private:
	std::string name;
public:
	Zombie();

	void setName(const std::string value);
	void announce(void);

	const std::string& getName()const;


	~Zombie();
};

Zombie* zombieHorde(int N, std::string name);