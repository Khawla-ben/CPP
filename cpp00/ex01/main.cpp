/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:18:52 by kben-ham          #+#    #+#             */
/*   Updated: 2023/11/09 15:41:11 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int check_if_digit(const std::string& information)
{
	size_t i = 0;
	while (i < information.length())
	{
		if (!std::isdigit(information[i]))
			return 0;
		i++;
	}
	return 1;
}

std::string check_if_empty(const std::string& var)
{
	std::string information;

	std::cout << var;
	std::getline(std::cin, information);
	if (var == "Enter the phone number: ")
	{
		while (check_if_digit(information) == 0 || information == "" )
		{
			std::cout << var;
			std::getline(std::cin, information);
		}
		return (information);
	}
	while (information == "")
	{
		std::cout << var;
		std::getline(std::cin, information);
	}
	return (information);
	
}

std::string check_if_more_than_10(std::string value)
{
	if (value.length() > 10)
	{
		value.resize(9);
		value += '.'; 
	}
	return(value);
}

int main()
{
	int			i;
	std::string word;
	Phonebook	Phonebook;

	i = 0;
	while (1)
	{
		std::cout << "My_Phone_Book : ";
		std::getline(std::cin, word);
		
		if (word == "ADD")
		{
			Phonebook.add(i);
			i++;
		}
		else if (word == "SEARCH")
			Phonebook.search();
		else if (word == "EXIT")
			exit(1);
	}
}
