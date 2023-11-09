/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 20:02:32 by kben-ham          #+#    #+#             */
/*   Updated: 2023/11/09 15:39:18 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include <iostream>
#include <sstream>
#include <iomanip>

class Contact
{
private :
	int index;
	int num;
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;

public :

	Contact(); //Constructor
	
	void setIndex(int value);
	void setNum(int value);
	void setFirstName(const std::string& value);
	void setLastName(const std::string& value);
	void setNickname(const std::string& value);
	void setPhonenumber(const std::string& value);
	void setDarkestsecret(const std::string& value);


	const int& getIndex() const;
	const int& getNum() const;
	const std::string& getFirstName() const;
	const std::string& getLastName() const;
	const std::string& getNickname() const;
	const std::string& getPhonenumber() const;
	const std::string& getDarkestsecret() const;
	
	// ~Contact(); //Destructor
		
};
