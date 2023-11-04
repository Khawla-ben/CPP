/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 20:02:32 by kben-ham          #+#    #+#             */
/*   Updated: 2023/11/04 22:54:47 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include <iostream>

class Contact
{
	private :
		int index;
		std::string first_name;
		std::string last_name;
		std::string nickname;
	public :
	
		void setIndex(int value)
		{
			index = value;
		}
		
		int getIndex()
		{
			return index;
		}
		
		void setFirstName(const std::string& value)
		{
			first_name = value;
		}
	
		std::string getFirstName()
		{
			return first_name;
		}
	
		void setLastName(const std::string& value)
		{
			last_name = value;
		}
	
		std::string getLastName()
		{
			return last_name;
		}
	
		void setNickname(const std::string& value)
		{
			nickname = value;
		}
	
		std::string getNickname()
		{
			return nickname;
		}
};


