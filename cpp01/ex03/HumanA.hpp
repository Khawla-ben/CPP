/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 18:52:34 by kben-ham          #+#    #+#             */
/*   Updated: 2023/11/26 18:52:36 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include "Weapon.hpp"

class  HumanA
{
private:
	std::string name;
	Weapon &my_weapon2;
public:
	HumanA(const std::string& str, Weapon &a);

	void setName(const std::string value);
	void attack();
	const std::string& getName()const;

	~HumanA();
};