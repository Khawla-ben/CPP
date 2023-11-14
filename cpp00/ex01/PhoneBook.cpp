/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 19:46:16 by kben-ham          #+#    #+#             */
/*   Updated: 2023/11/14 16:10:27 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"



Phonebook::Phonebook()
{
	for (int i = 0; i < 8; i++)
	{
		Array[i] = Contact();
	}
	
}


void Phonebook::check_the_index()
{
	int j = -1;
	std::string value_of_index;
	std::string line;

	std::cout << "Enter the index of the contact :" << std::endl ;
	std::getline(std::cin, line);
	if (!std::cin)
		exit(1);
	while (++j < 8)
	{
		std::ostringstream oss;
		oss << Array[j].getIndex();
		value_of_index = oss.str();
		if (value_of_index == line)
		{
			std::cout << "Index : " << Array[j].getIndex() << std::endl ;
			std::cout << "First Name : " << Array[j].getFirstName() << std::endl ;
			std::cout <<  "Last Name : " << Array[j].getLastName() << std::endl ;
			std::cout << "Nick Name : " << Array[j].getNickname() << std::endl ;
			std::cout << "Phone Number : " << Array[j].getPhonenumber() << std::endl ;
			std::cout << "Darkest Secret : " << Array[j].getDarkestsecret() << std::endl ;
			return ;
		}
	}
	if (j == 8)
		check_the_index();
	return ;
}

void Phonebook::search()
{
	int j;
	std::string check;

	std::cout << std::setw(10) << "Index" << " | " << std::setw(10) << "First name" << " | " <<  std::setw(10) << "Last name" << " | " << std::setw(10) << "Nickname" << std::endl ;
	j = -1;
	while (++j <= 8)
	{
		check = Array[j].getFirstName();
		if (check == "")
			break ;
		std::cout << std::setw(10) << Array[j].getIndex() << " | " << std::setw(10) <<  check_if_more_than_10(Array[j].getFirstName()) << " | " <<std::setw(10) << check_if_more_than_10(Array[j].getLastName()) << " | " <<std::setw(10) << check_if_more_than_10(Array[j].getNickname()) << std::endl;
	}
	if (j == 0)
	{
		std::cout << "        The Phonebook is empty " << std::endl;
		return ;
	}
	check_the_index();
}
void Phonebook::set_value()
{
	Array[0].setIndex(0);
}

int Phonebook::search_for_oldest()
{
	int num;
	int j;
	int count;

	count = Array[0].getNum();
	j = 0;
	while (++j < 7)
	{
		num = Array[j].getNum();
		if (num < count)
			count = num;
	}
	return (count);
}

void Phonebook::add(int i)
{
	std::string	check;
	int j = -1;

	while (++j < 8)
	{
		check = Array[j].getFirstName();
		if (check == "")
			break;
	}
	if (j == 8)
	{
		int var = search_for_oldest();
		std::cout << Array[var].getIndex() << std::endl ;
		j = Array[var].getIndex();
		
	}
	Array[j].setFirstName(check_if_empty("Enter the first name: "));
	Array[j].setLastName(check_if_empty("Enter the last name: "));
	Array[j].setNickname(check_if_empty("Enter the nickname: "));
	Array[j].setPhonenumber(check_if_empty("Enter the phone number: "));
	Array[j].setDarkestsecret(check_if_empty("Enter a darckest secret: "));
	Array[j].setIndex(j);
	Array[j].setNum(i++);
}

Phonebook::~Phonebook() {}
