#pragma once


#include <iostream>


class  Weapon
{
private:
	std::string type;
public:
	Weapon();
	Weapon(const std::string& str);
	void setType(const std::string& new_type);

	const std::string& getType()const;

	~Weapon();
};
