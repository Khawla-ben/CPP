/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 23:32:15 by kben-ham          #+#    #+#             */
/*   Updated: 2024/03/02 22:52:05 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int BitcoinExchange::check_num_pipe_space()
{
    int pipe = 0;
    int space = 0;
    for (size_t i = 0; i < line.size(); i++)
    {
        if (line[i] == '|')
            pipe++;
        else if (line[i] == ' ')
            space++;
    }
    if (pipe != 1  || space != 2)
    {
        std::cout << "Error: bad input => " << line << std::endl;
        return (1);
    }
    return (0);
}

int BitcoinExchange::check_price()
{
    tmp = 0;
    for (size_t i = 0; i < str2.size(); i++)
    {
        if (str2[i] == '.')
            tmp++;
        else if ((!isdigit(str2[i]) && str2[i] != '.') || tmp > 1 || str2[str2.size() - 1] == '.')
        {
            std::cout << "Error: bad input => " << line << std::endl;
            return (1);
        }
    }
    return (0);
}

int BitcoinExchange::check_part(std::string part)
{
    size_t limit1;
    limit1 = part.find('|');
    if (limit1 != std::string::npos)
        part = part.substr(0, limit1 - 1);
    if(part.size() != 2 && len != 1)
    {
        std::cout << "Error: bad input => " << line << std::endl;
        return (1);
    }
    for (size_t i = 0; i < part.size(); i++)
    {
        if (!isdigit(part[i]))
        {
            std::cout << "Error: bad input => " << line << std::endl;
            return (1);
        }
    }
    return (0);
}

int BitcoinExchange::check_value()
{
    str = line.substr(0, limit - 1);
    str2 = line.substr(limit + 2, line.size());
    if (check_price())
        return (1);
    std::stringstream price(str2);
    price >> price_double;
    if (price_double > 1000)
    {
        std::cout << "Error: too large a number." << std::endl;
        return (1);
    }
    return (0);
}

int BitcoinExchange::check_date()
{
    limit = line.find('|');
    if (line[limit - 1] != ' ' || line[limit + 1] != ' ' || !isdigit(line[limit - 2]) || !isdigit(line[limit + 2]))
    {
        if (line[limit + 2] == '-' && line[limit + 1] == ' ')
            std::cout << "Error: not a positive number." << std::endl;
        else    
            std::cout << "Error: bad input => " << line << std::endl;
        return (1);
    }
    std::istringstream inputStream(line);
    std::vector<int> splitParts;
    std::string part;
    len = 0;
    while (std::getline(inputStream, part, '-'))
    {
        len++;
        if (check_part(part))
            return (1);
        std::stringstream pa(part);
        int part_int = 0;
        pa >> part_int;
        splitParts.push_back(part_int);
        
    }
    if (splitParts.size() != 3 || (splitParts[1] < 1 || splitParts[1] > 12) || (splitParts[2] < 1 || splitParts[2] > 31) || (splitParts[0] < 2009 ))
    {
        std::cout << "Error: bad input => " << line << std::endl;
        return (1);
    }
    int tmp = splitParts[0];
    if (((tmp % 4) != 0 && splitParts[1] == 02  && splitParts[2] > 28) || (splitParts[1] == 02  && splitParts[2] > 29))
    {
        std::cout << "Error: bad input => " << line << std::endl;
        return (1);
    }
    return (0);
}

int BitcoinExchange::fillmap()
{
    std::ifstream data_file("data.csv");
    if (!data_file.is_open())
    {
        std::cout << "Error: could not open file." << std::endl;
        return(1);
    }
    std::getline(data_file, line);
    tmp = 0;
    while (std::getline(data_file, line))
    {
        tmp++;
        limit = line.find(',');
        str = line.substr(0, limit);
        str2 = line.substr(limit + 1, line.size());
        if (tmp == 1)
            start_year = str;
        std::stringstream a(str2);
        double value = 0.0;
        a >> value;
        myMap.insert(std::make_pair(str, value));
    }
    data_file.close();
    return(0);
}

void BitcoinExchange::search_and_calculate()
{
    std::map<std::string, double>::iterator it = myMap.find(str);
    std::map<std::string, double>::iterator end = myMap.end();
    if (it != myMap.end()) 
        std::cout << str << " => " << str2 << " = "<< it->second * price_double << std::endl;
    else
    {
        it = myMap.lower_bound(str);
        if (it != myMap.end())
        {
            it--;
            std::cout << str << " => " << str2 << " = "<< it->second * price_double << std::endl;
        }
        else
        {
            end--;
            std::cout << str << " => " << str2 << " = "<< end->second * price_double << std::endl;
        }
    }
}

BitcoinExchange::BitcoinExchange(std::string input_file)
{
    if (fillmap())
        return;
    std::ifstream file(input_file);
    if (!file.is_open())
    {
        std::cout << "Error: could not open file." << std::endl;
        return;
    }
    std::getline(file, line);
    if (line != "date | value")
    {
        std::cout << "Error: bad input\n";
        return;
    }
    while (std::getline(file, line))
    {
        if (check_num_pipe_space() || check_date() || check_value() )
            continue;
        search_and_calculate();
    }
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &val)
{
	*this = val;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &a)
{
	if (this != &a)
	{
        this->myMap = a.myMap;
	    this->tmp = a.tmp;
	    this->limit = a.limit;
	    this->str = a.str;
	    this->str2 = a.str2;
	    this->start_year = a.start_year;
	    this->line = a.line;
	    this->price_double = a.price_double;
	}
	return *this;
}

BitcoinExchange::~BitcoinExchange(){}

