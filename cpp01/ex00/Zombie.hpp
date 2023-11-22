#pragma once


#include <iostream>


class  Zombie
{
private:
	std::string name;

public:
	Zombie();
	Zombie(const std::string& str);

	void setName(const std::string value);
	void announce(void);

	const std::string& getName()const;

	~Zombie();
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);