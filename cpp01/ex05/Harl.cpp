

#include "Harl.hpp"


Harl::Harl()
{
	debugF = &Harl::debug;
    infoF = &Harl::info;
    warningF = &Harl::warning;
    errorF = &Harl::error;
}

void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

int check_level(std::string level)
{
	std::string a[4];

	a[0] = "DEBUG";
	a[1] = "INFO";
	a[2] = "WARNING";
	a[3] = "ERROR";
	int i = 0;
	while(i <= 3)
	{
		if (a[i] == level)
			return (i);
		i++;
	}
	return (-1);
}

void Harl::complain(std::string level)
{
	int userInput;

	userInput = check_level(level);

	switch (userInput) {
		case 0:
		{
			(this->*debugF)();
			break;
		}
		case 1:
		{
			(this->*infoF)();
			break;
		}
		case 2:
		{
			(this->*warningF)();
			break;
		}
		case 3:
		{
			(this->*errorF)();
			break;
		}
		default:
		{
			std::cout << "Invalid choice.\n";
			break;
		}
	}
}

Harl::~Harl()
{
	std::cout << " end " << std::endl;
}
