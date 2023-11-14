#pragma once


#include <iostream>


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

Zombie* newZombie(std::string name);
void randomChump(std::string name);