


#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Error: invalid arguments" << std::endl;
		return (1);
	}

	std::ifstream filename(av[1]);
	std::string s1  = av[2];
	std::string s2 = av[3];
	std::stringstream ss;
	std::string new_ss;

	if (!filename.is_open())
	{
		std::cerr << "Error opening the file." << std::endl;
		return 1;
	}

	ss << filename.rdbuf();
	filename.close();
	
	new_ss = ss.str();
	std::size_t position = new_ss.find(s1);

	while (position != std::string::npos)
	{
		new_ss.erase(position, s1.length());
		new_ss.insert(position, s2);
		position = new_ss.find(s1);
	}

	std::string new_name = av[1];
	new_name += ".replace";

	std::ofstream newfile(new_name);

	if (!newfile.is_open())
	{
    	std::cerr << "Error creating the file." << std::endl;
        return 1;
    }
	newfile << new_ss;
    newfile.close();
	return 0;
}
