/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:18:52 by kben-ham          #+#    #+#             */
/*   Updated: 2023/11/07 18:42:33 by kben-ham         ###   ########.fr       */
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

int search_for_oldest(Phonebook	Phonebook)
{
	int num;
	int j;
	int count;

	count = Phonebook.Array[0].getNum();
	j = 0;
	while (++j < 7)
	{
		num = Phonebook.Array[j].getNum();
		if (num < count)
			count = num;
	}
	return (count);
}

void check_the_index(Phonebook Phonebook)
{
	int j = -1;
	std::string value_of_index;
	std::string line;

	std::cout << "Enter the index of the contact :" << std::endl ;
	std::getline(std::cin, line);
	while (++j <= 7)
	{
		std::ostringstream oss;
		oss << Phonebook.Array[j].getIndex();
		value_of_index = oss.str();
		if (value_of_index == line)
		{
			std::cout << "Index : " << Phonebook.Array[j].getIndex() << std::endl ;
			std::cout << "First Name : " << Phonebook.Array[j].getFirstName() << std::endl ;
			std::cout <<  "Last Name : " << Phonebook.Array[j].getLastName() << std::endl ;
			std::cout << "Nick Name : " << Phonebook.Array[j].getNickname() << std::endl ;
			std::cout << "Phone Number : " << Phonebook.Array[j].getPhonenumber() << std::endl ;
			std::cout << "Darkest Secret : " << Phonebook.Array[j].getDarkestsecret() << std::endl ;
			return ;
		}
	}
	if (j == 8)
		check_the_index(Phonebook);
	return ;
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
	int			j;
	int			i;
	std::string	check;
	std::string word;
	std::string information;
	Phonebook	Phonebook;

	i = 0;
	Phonebook.Array[0].setIndex(0);
	while (1)
	{
		std::cout << "My_Phone_Book : ";
		std::getline(std::cin, word);
		
		if (word == "ADD")
		{
			j = -1;
			while (++j <= 7)
			{
				check = Phonebook.Array[j].getFirstName();
				if (check == "")
					break;
			}
			if (j == 8)
			{
				int var = search_for_oldest(Phonebook);
				std::cout << Phonebook.Array[var].getIndex() << std::endl ;
				j = Phonebook.Array[var].getIndex();
				
			}
			Phonebook.Array[j].setFirstName(check_if_empty("Enter the first name: "));
			Phonebook.Array[j].setLastName(check_if_empty("Enter the last name: "));
			Phonebook.Array[j].setNickname(check_if_empty("Enter the nickname: "));
			Phonebook.Array[j].setPhonenumber(check_if_empty("Enter the phone number: "));
			Phonebook.Array[j].setDarkestsecret(check_if_empty("Enter a darckest secret: "));
			Phonebook.Array[j].setIndex(j);
			Phonebook.Array[j].setNum(i++);		
		}
		else if (word == "SEARCH")
		{
			std::cout << std::setw(10) << "Index" << " | " << std::setw(10) << "First name" << " | " <<  std::setw(10) << "Last name" << " | " << std::setw(10) << "Nickname" << std::endl ;
			j = -1;
			while (++j <= 7)
			{
				check = Phonebook.Array[j].getFirstName();
				if (check == "")
					break ;
				std::cout << std::setw(10) << Phonebook.Array[j].getIndex() << " | " << std::setw(11) <<  check_if_more_than_10(Phonebook.Array[j].getFirstName()) << " | " <<std::setw(10) << check_if_more_than_10(Phonebook.Array[j].getLastName()) << " | " <<std::setw(10) << check_if_more_than_10(Phonebook.Array[j].getNickname()) << std::endl ;
			}
			check_the_index(Phonebook);
		}
		else if (word == "EXIT")
			exit(1);
	}
	
}
