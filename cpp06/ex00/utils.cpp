/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 16:27:46 by kben-ham          #+#    #+#             */
/*   Updated: 2024/01/11 07:34:39 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <limits.h>

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
	else if (f == 1 && a == 1 && string.length() == 2)
		return (0);
	else if (a == 1 && f == 1)
		return (1);//float
	else if (a == 1)
		return (2);//double
	else if (f == 1)
		return (0);
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

void to_float(double a, std::string &s)
{
	float f = static_cast<float>(a);
	if (a < std::numeric_limits<float>::lowest() || a > std::numeric_limits<float>::max())
	{
		std::cout << "float: " <<  "impossible " << std::endl;
		return;
	}
	if (check_if('.', s) == 1)
		std::cout << "float: " << std::fixed<<f << "f" << std::endl;
	else
		std::cout << "float: " <<  f << ".0f" << std::endl;
}

void to_double(double a, std::string &s)
{
	if (a < std::numeric_limits<double>::lowest() || a > std::numeric_limits<double>::max())
	{
		std::cout << "double: " <<  "impossible " << std::endl;
		return;
	}
	if (check_if('.', s) == 1)
		std::cout << "double: " << a << std::endl;
	else
		std::cout << "double: " <<  a << ".0" << std::endl;
}

void to_int(double a)
{
	if (a < std::numeric_limits<int>::lowest() || a > std::numeric_limits<int>::max())
		std::cout << "int: " <<  "impossible " << std::endl;
	else
		std::cout << "int: " << static_cast<int>(a) << std::endl;
}

void to_char(double a)
{
	if (a >= 32 && a < 127)
		std::cout << "char: " << "'" << static_cast<char>(a) << "'" << std::endl;
	else if (a < std::numeric_limits<char>::lowest() || a > std::numeric_limits<char>::max())
		std::cout << "char: " <<  "impossible " << std::endl;
	else 
		std::cout << "char: " <<  "Non displayable" << std::endl;
}

void nan_or_inf(std::string &s, int check)
{
	std::cout << "char: " <<  "impossible " << std::endl;
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
	{
		double a = std::strtod(s.c_str(),NULL);
		to_char(a);
		to_int(a);
		to_float(a, s);
		to_double(a, s);
	}
	else
		char_and_else(s, check);
}
