/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   other.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 18:32:02 by kben-ham          #+#    #+#             */
/*   Updated: 2023/11/05 18:32:04 by kben-ham         ###   ########.fr       */
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
/*   Updated: 2023/11/05 18:31:45 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int check_if_empty(const std::string& var)
{
	std::string information;

	std::cout << var;
	std::getline(std::cin, information);
	while (information == "")
	{
		std::cout << var;
		std::getline(std::cin, information);
	}
	return (1);
	
}

// int check_if_digit(const std::string& information)
// {
//     for (char c : information) {
//         if (!std::isdigit(c)) {
//             return 0;
//         }
//     }
//     return 1;
// }

int main()
{
	int			j;
	std::string word;
	std::string information;
	Phonebook	Phonebook;

	j = -1;
	while (++j < 7)
		Phonebook.Array[j].setIndex(j);
	while (1)
	{
		std::cout << "My_Phone_Book : ";
		std::getline(std::cin, word);
		
		if (word == "ADD")//add 0
		{
			//check_if_the array is full
			//if not return the index 

			//i should check if there is an empty field 

			if (check_if_empty("Enter the first name: "))
			// std::cout << "Enter the first name: ";
			// std::getline(std::cin, information);
			Phonebook.Array[0].setFirstName(information);
			
			std::cout << "Enter the last name: ";
			std::getline(std::cin, information);
			Phonebook.Array[0].setLastName(information);
			
			std::cout << "Enter the nickname: ";
			std::getline(std::cin, information);
			Phonebook.Array[0].setNickname(information);
			
			std::cout << "Enter the phone number: ";
			std::getline(std::cin, information);
			// if (check_if_digit(information))
			// 	Phonebook.Array[0].setPhonenumber(information);
			// else
			// {
			// 	std::cout << "Enter the phone number (it should be all digit): ";
			// 	std::getline(std::cin, information);//you check it again
			// }
			
			std::cout << "Enter a darckest secret: ";
			std::getline(std::cin, information);
			Phonebook.Array[0].setDarkestsecret(information);
		}
		// else if (word == "SEARCH")
		// {
			
		// }
		else if (word == "EXIT")
			exit(1);
	}
}