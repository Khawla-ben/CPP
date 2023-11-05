/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 19:46:16 by kben-ham          #+#    #+#             */
/*   Updated: 2023/11/05 20:41:51 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"


int check_if_digit(const std::string& information)
{
	int i = 0;
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

int search_for_oldest(Phonebook	Phonebook)//not correct
{
	int num;
	int j;
	int count;

	count = Phonebook.Array[0].getNum();
	j = 0;
	while (++j <= 7)
	{
		num = Phonebook.Array[j].getNum();
		if (num < count)
			count = num;
	}
	return (count);
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
			while (++j <= 2)
			{
				check = Phonebook.Array[j].getFirstName();
				if (check == "")
					break;
			}
			//check_if_the array is full
			//if not return the index
			//if yes , replace the first one in the list by the new one
			if (j == 2)
			{
				std::cout << "WHAAAAT" << std::endl ;
				//search for the oldest one (num)
				// set j by the index of it
				int var = search_for_oldest(Phonebook);
				std::cout << var << std::endl ;
				std::cout << "ook" << std::endl ;
				std::cout << Phonebook.Array[var].getIndex() << std::endl ;
				j = Phonebook.Array[var].getIndex();
				
			}
			
			Phonebook.Array[j].setFirstName(check_if_empty("Enter the first name: "));
			Phonebook.Array[j].setLastName(check_if_empty("Enter the last name: "));
			Phonebook.Array[j].setNickname(check_if_empty("Enter the nickname: "));
			Phonebook.Array[j].setPhonenumber(check_if_empty("Enter the phone number: "));
			Phonebook.Array[j].setDarkestsecret(check_if_empty("Enter a darckest secret: "));
			Phonebook.Array[j].setIndex(j);
			Phonebook.Array[j].setNum(i++);////////


			// afficher list
			int a;
			int value;
			std::string value1;

			a = -1;
			value = -1;
			// value1 = NULL;
			while (++a <= 7)
			{
				value = Phonebook.Array[a].getIndex();
				value1 = Phonebook.Array[a].getFirstName();
				std::cout << value << std::endl ;
				std::cout << value1 << std::endl;
			}
			
		}
		// else if (word == "SEARCH")
		// {
			
		// }
		else if (word == "EXIT")
			exit(1);
	}
	
}