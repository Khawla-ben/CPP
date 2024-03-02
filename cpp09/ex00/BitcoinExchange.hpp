/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 23:31:41 by kben-ham          #+#    #+#             */
/*   Updated: 2024/03/02 22:52:12 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
 
#include <iostream>
#include <sstream>
#include <fstream>
#include <map>
#include <vector>
 

class  BitcoinExchange
{
private:
	BitcoinExchange();
	std::map<std::string, double> myMap;
	size_t limit, tmp, len;
	std::string str, str2;
	std::string start_year;
	std::string line;
	double price_double;


public:

	BitcoinExchange(std::string input_file);
	BitcoinExchange(const BitcoinExchange &val);
	BitcoinExchange &operator=(const BitcoinExchange &a);
	~BitcoinExchange();

    int fillmap();
	int check_num_pipe_space();
    int check_date();
    int check_value();
	int check_price();
	void search_and_calculate();
	int check_part(std::string part);

};