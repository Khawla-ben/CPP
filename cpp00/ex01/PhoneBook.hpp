/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 19:46:14 by kben-ham          #+#    #+#             */
/*   Updated: 2023/11/09 15:38:02 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Contact.hpp"


std::string check_if_empty(const std::string& var);
std::string check_if_more_than_10(std::string value);


class Phonebook
{
private :
	Contact Array[7];
public :
	void add(int i);
	void search();
	int search_for_oldest();
	void set_value();
	void check_the_index();
};
