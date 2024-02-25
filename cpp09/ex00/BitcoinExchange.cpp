/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 23:32:15 by kben-ham          #+#    #+#             */
/*   Updated: 2024/02/25 12:24:30 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "BitcoinExchange.hpp"
#include <fstream>
#include <string>
#include <vector>
#include <sstream>


int firstcheck(std::string str2, std::string line)
{
    int num = 0;
    for(size_t i = 0; i < str2.size(); i++)//ila kan salib (-)
    {
        if (str2[0] == '-')
        {
            std::cout << "Error: not a positive number." << std::endl;
            return (1);
        }
        if (str2[i] == ',')
            num++;
        if (!isdigit(str2[i]) && str2[i] != ',' && num > 2)
        {
            std::cout << "Error: bad input => " << line << std::endl;
            return (1);
        }
    }
    return (0);
}

int secondcheck(std::string line)
{
    int num = 0;
    int pipe = 0;
    int space = 0;
    for(size_t i = 0; i < line.size(); i++)//ila kan salib (-)
    {
        if (line[i] == '-')
            num++;
        if (line[i] == '|')
            pipe++;
        if (line[i] == ' ')
            pipe++;
        if (pipe != 1  || space != 2 || num != 2)
        {
            std::cout << "Error: bad input => " << line << std::endl;
            return (1);
        }
    }
    return (0);
}

BitcoinExchange::BitcoinExchange(std::string &input_file)
{
    std::ifstream data_file("data.csv");
    if (!data_file.is_open())
    {
        std::cout << "Error: could not open file." << std::endl;
    }
        
    std::string str, str2;
    std::getline(data_file, line);
    while (std::getline(data_file, line))
    {
        limit = line.find(',');
        str = line.substr(0, limit);
        str2 = line.substr(limit + 1, line.size());
        std::stringstream a(str2);
        double what = 0.0;
        a >> what;//in case of fails 
        myMap.insert(std::make_pair(str, what));
    }
    data_file.close();
    // std::map<std::string, double>::iterator it = myMap.begin();
    // while (it != myMap.end()) {
    //     std::cout << "Key: " << it->first
    //          << " Value: " << it->second << std::endl;
    //     ++it;
    // }
    
    /********** Now we have a map filled by data **********/
    
    std::ifstream file(input_file);
    if (!file.is_open())
        std::cout << "Error: could not open file." << std::endl;
    std::getline(file, line);
    if (line != "date | value")
        std::cout << "Error: bad input\n";
        
    //start reading the file from line 2
    while (std::getline(file, line))
    {
        if (!secondcheck(line)) // multiple pipes and 2 spaces and 2 --
            continue;
        limit = line.find('|');
        if (limit == std::string::npos || line[limit - 1] != ' ' || line[limit + 1] != ' ' || !isdigit(line[limit - 2]) || !isdigit(line[limit + 2]))
        {
            std::cout << "Error: bad input => " << line << std::endl;
            continue;
        }
        str = line.substr(0, limit - 1);
        str2 = line.substr(limit + 2, line.size());
        if(firstcheck(str, line))
            continue;
        std::stringstream price(str2);
        double price_double = 0.0;
        price >> price_double;
        if (price_double > 1000)
        {
            std::cout << "Error: too large a number." << std::endl;
            continue;
        }
        /*****start the second part(which is the first one)*/
        
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
        if (splitParts.size() != 3 || (splitParts[1] < 1 || splitParts[1] > 12) || (splitParts[2] < 1 || splitParts[2] > 31) || (splitParts[0] < 2009 || splitParts[0] > 2023))
        {
            std::cout << "Error: bad input => " << line << std::endl;
            continue;
        }
        

        
    }
    
    















    

    
    //check the first one if it's like "date | value"
    /// should check each line if it is in this  format "date | value".
    //check each line Year-Month-Day 
    //check value (prix) if it's between 0 and 1000.
    // std::ifstream file(input_file);
    // if (!file.good())
    //     std::cout << "Error: could not open file." << std::endl;
    // if (getline(file, line))
    //     // Process the line as needed
    //     std::cout << "Read from file: " << line << std::endl;
    // else
    //     std::cerr << "Error reading a line from the file." << std::endl;

    // Close the file
    // file.close();
    
}

    //    str2 = line.substr(limit + 1, line.size());
    //     const char* cstr = str2.c_str();

    //     double what = std::strtod(cstr, NULL);

BitcoinExchange::~BitcoinExchange(){}

