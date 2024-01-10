/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 13:48:25 by kben-ham          #+#    #+#             */
/*   Updated: 2023/12/26 16:32:54 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>
#include <iomanip>
#include <sstream>


class  ScalarConverter
{

public:
	ScalarConverter();
	ScalarConverter(const ScalarConverter &val);
	ScalarConverter &operator=(const ScalarConverter &a);
	static void convert(std::string &string);
	~ScalarConverter();
};

int check_if(char c, std::string &string);
int find_type(std::string &string);
void char_and_else(std::string &s, int check);
void double_float_int(std::string &s);
void nan_or_inf(std::string &s, int check);
void convert_string(std::string &s, int check);