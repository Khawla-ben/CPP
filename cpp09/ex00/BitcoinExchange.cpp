/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 23:32:15 by kben-ham          #+#    #+#             */
/*   Updated: 2024/02/25 23:55:15 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "BitcoinExchange.hpp"


int BitcoinExchange::check_price()
{
    int num = 0;
    for (size_t i = 0; i < str2.size(); i++)
    {
        if (str2[i] == ',')
            num++;
        else if ((!isdigit(str2[i]) && str2[i] != ',') || num > 2) //wach , ola .
        {
            std::cout << "Error: bad input5 => " << line << std::endl;
            return (1);
        }
    }
    return (0);
}

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
        std::cout << "Error: bad input4 => " << line << std::endl;
        return (1);
    }
    return (0);
}

int BitcoinExchange::check_value()
{
    str = line.substr(0, limit - 1);
    str2 = line.substr(limit + 2, line.size());
    if(check_price())
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
            std::cout << "Error: bad input1 => " << line << std::endl;
        return (1);
    }
    std::istringstream inputStream(line);
    std::vector<double> splitParts;
    std::string part;
    while (std::getline(inputStream, part, '-'))
    {
        std::stringstream pa(part);
        double part_double = 0.0;
        pa >> part_double;
        splitParts.push_back(part_double);
        
    }
    if (splitParts.size() != 3 || (splitParts[1] < 1 || splitParts[1] > 12) || (splitParts[2] < 1 || splitParts[2] > 31) || (splitParts[0] < 2009 || splitParts[0] > 2023)) //check the date if it's valid
    {
        std::cout << "Error: bad input2 => " << line << std::endl;
        return (1);
    }
    int tmp = splitParts[0];
    if (((tmp % 4) == 0.00 && splitParts[1] == 02  && splitParts[2] > 28) || (splitParts[1] == 02  && splitParts[2] > 29))//check for %4 and february
    {
        std::cout << "Error: bad input3 => " << line << std::endl;
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
    while (std::getline(data_file, line))
    {
        limit = line.find(',');
        str = line.substr(0, limit);
        str2 = line.substr(limit + 1, line.size());
        std::stringstream a(str2);
        double what = 0.0;
        a >> what;//in case of failure
        myMap.insert(std::make_pair(str, what));
    }
    data_file.close();
    return(0);
}

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(std::string input_file)
{
    if (fillmap())//fill the map
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

    while (std::getline(file, line))//start reading the file from line 2
    {
        if (check_num_pipe_space())//check en general
            continue;
        if (check_date()) //check the date
            continue;
        if (check_value()) //check the value
            continue;
        
        //search and calculate
        for (std::map<std::string, double>::iterator it = myMap.begin(); it != myMap.end(); ++it)
        {
            if (it->first == str)
                std::cout << str << " => " << str2 << " = "<< it->second * price_double << std::endl;
            // else
            //     std::cout << "nope" << std::endl;
            //case of (if it's the last one and there not a date near of it )
        }
    }
}

BitcoinExchange::~BitcoinExchange(){}

