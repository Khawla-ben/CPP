/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 19:46:16 by kben-ham          #+#    #+#             */
/*   Updated: 2023/11/04 22:50:54 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int main()
{
	int			j;
	Phonebook	Phonebook;

	j = -1;
	while (++j < 7)
		Phonebook.Array[j].setIndex(j);
	
}