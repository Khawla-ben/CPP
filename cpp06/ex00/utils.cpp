/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 16:27:46 by kben-ham          #+#    #+#             */
/*   Updated: 2023/12/26 16:36:02 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int check_if(char c, std::string &string)
{
	for(int i = 0; i < (int)(string.length()); i++)
	{
		if ( string[i] == c)
			return (1);
	}
	return (0);
}
int find_type(std::string &string)
{
	int a = 0;
	int f = 0;
	if (string.length() == 1 && !isdigit(string[0]))
		return (6);//one char
	if (string == "-inff" ||string == "+inff" || string == "-inf" || string == "+inf")
		return (4);//inf
	else if (string == "nanf" || string == "nan")
		return (5);//nanf
	for (size_t i = 0; i < string.length(); i++)
	{
		if (string[i] == '.')
			a++;
		else if (!isdigit(string[i]))
		{
			if ((string[0] != '+' && string[0] != '-' && (string[i] != 'f'))
				|| (string[i] == 'f' && i != string.size() - 1))
				return (0);//not
		}
		if (string[(string.length() - 1)] == 'f' && i == string.length() - 1)
			f++;
	}
	if (a > 1 || f > 1)
		return (0);//not
	else if (a == 1 && f == 1)
		return (1);//float
	else if (a == 1)
		return (2);//double
	return (3);//int
}

void char_and_else(std::string &s, int check)
{
	if (check == 6)
	{
		std::cout << "char: " << "'" << s[0] << "'" << std::endl;
		std::cout << "int: " << static_cast<int>(s[0]) << std::endl;
		std::cout << "float: " << static_cast<float>(s[0]) << ".0f" <<  std::endl;
		std::cout << "double: " << static_cast<double>(s[0]) << ".0" << std::endl;
	}
	else
	{
		std::cout << "char: " <<  "impossible " << std::endl;
		std::cout << "int: " << "impossible " << std::endl;
		std::cout << "float: " << "impossible " << std::endl;
		std::cout << "double: " << "impossible " << std::endl;
	}
}
void double_float_int(std::string &s)
{
	double a = std::strtod(s.c_str(),NULL);
	if (a >= 32 && a < 127)
		std::cout << "char: " << "'" << static_cast<char>(a) << "'" << std::endl;
	else if (a >= 0 && a <= 32)
		std::cout << "char: " <<  "Non displayable" << std::endl;
	else
		std::cout << "char: " <<  "impossible " << std::endl;
	std::cout << "int: " << static_cast<int>(a) << std::endl;
	if (check_if('.', s) == 1)
	{
		std::cout << "float: " << std::fixed << static_cast<float>(a) << "f" << std::endl;
		std::cout << "double: " << std::fixed << a << std::endl;
	}
	else
	{
		std::cout << "float: " << std::fixed << static_cast<float>(a) << ".0f" << std::endl;
		std::cout << "double: " << std::fixed << a << ".0" << std::endl;
	}
}

void nan_or_inf(std::string &s, int check)
{
	std::cout << "int: " << "impossible " << std::endl;
	if (check == 4)
	{
		std::cout << "float: " << s[0] << "inff" << std::endl;
		std::cout << "double: " << s[0] << "inf" << std::endl;
	}
	else
	{
		std::cout << "float: " << "nanf" << std::endl;
		std::cout << "double: " << "nan" << std::endl;
	}
}

void convert_string(std::string &s, int check)
{
	if (check == 5 || check == 4)
		nan_or_inf(s, check);
	else if (check == 1 || check == 3 || check == 2)
		double_float_int(s);
	else
		char_and_else(s, check);
}
