/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 23:31:41 by kben-ham          #+#    #+#             */
/*   Updated: 2024/02/25 12:24:21 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
// #include <exception>
#include <map>
#include <sstream>


class  BitcoinExchange
{
private:
	std::map<std::string, double> myMap;
	size_t limit;
	// int start_year;
	std::string line;


public:

	// BitcoinExchange();
	BitcoinExchange(std::string &input_file);
	// BitcoinExchange(const BitcoinExchange &val);
	// BitcoinExchange &operator=(const BitcoinExchange &a);
	~BitcoinExchange();

    

};