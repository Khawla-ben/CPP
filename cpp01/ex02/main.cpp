

#include <iostream>
#include <string>


int main(int ac, char **av)
{
	(void)av;

	if (ac > 1)
	{
		std::cout << "Error: invalid arguments" << std::endl;
		return (1);
	}

	std::string string1 = "HI THIS IS BRAIN" ;
	std::string* stringPTR = &string1;
	std::string& stringREF = string1;

	std::cout << &string1 << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;

	std::cout <<"**********" << std::endl;

	std::cout << string1 << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;

	return (0);
}
