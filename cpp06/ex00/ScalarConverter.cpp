/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 13:48:23 by kben-ham          #+#    #+#             */
/*   Updated: 2024/01/11 06:29:58 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){}

ScalarConverter::ScalarConverter(const ScalarConverter &a)
{
	*this = a;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &a)
{
	(void)a;
	return *this;
}

void ScalarConverter::convert(std::string &string)
{
	int check = find_type(string);
	
	// std::cout << check;
	convert_string(string, check);
}
ScalarConverter::~ScalarConverter(){}
