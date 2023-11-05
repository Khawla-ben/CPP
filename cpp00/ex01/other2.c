/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   other2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 20:13:41 by kben-ham          #+#    #+#             */
/*   Updated: 2023/11/05 20:13:43 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 19:46:16 by kben-ham          #+#    #+#             */
/*   Updated: 2023/11/05 20:13:10 by kben-ham         ###   ########.fr       */
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

int search_for_oldest(Phonebook	Phonebook)
{
	int num;
	int j;
	int count;

	count = Phonebook.Array[0].getNum();
	j = 0;
	while (++j < 7)
	{
		if (count < num)
			num = count;
	}
	return (count);
}

int main()
{
	int			j;
	int			i;
	int			check;
	std::string word;
	std::string information;
	Phonebook	Phonebook;

	while (1)
	{
		std::cout << "My_Phone_Book : ";
		std::getline(std::cin, word);
		
		if (word == "ADD")
		{
			j = -1;
			while (++j < 7)
			{
				check = Phonebook.Array[j].getIndex();
				if (check == 0)
					break;
			}
			//check_if_the array is full
			//if not return the index
			//if yes , replace the first one in the list by the new one
			if (j == 7)
			{
				//search for the oldest one (num)
				// set j by the index of it
				int var = search_for_oldest(Phonebook);
				j = Phonebook.Array[var].getIndex();
				
			}
			if (check_if_empty("Enter the first name: "))
				Phonebook.Array[j].setFirstName(information);
			std::cout << Phonebook.Array[j].getFirstName() << std::endl ;
			
			if (check_if_empty("Enter the last name: "))
				Phonebook.Array[j].setLastName(information);
			
			if (check_if_empty("Enter the nickname: "))
				Phonebook.Array[j].setNickname(information);
			
			if (check_if_empty("Enter the phone number: "))
				Phonebook.Array[j].setPhonenumber(information);
				
			if (check_if_empty("Enter a darckest secret: "))
				Phonebook.Array[j].setDarkestsecret(information);
			
			Phonebook.Array[j].setIndex(j);
			Phonebook.Array[j].setNum(++i);


			// afficher list
			int a;
			int value;
			std::string value1;

			a = -1;
			while (++a < 7)
			{
				value = Phonebook.Array[0].getIndex();
				value1 = Phonebook.Array[0].getFirstName();
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