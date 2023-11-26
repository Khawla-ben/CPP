/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 18:52:42 by kben-ham          #+#    #+#             */
/*   Updated: 2023/11/26 18:52:45 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once


#include "Weapon.hpp"

class  HumanB
{
private:
	std::string name;
	Weapon *my_weapon1;
	
public:
	HumanB(const std::string& str);

	void setName(const std::string value);
	void attack(void);
	void setWeapon(Weapon &a);
	const std::string& getName()const;

	~HumanB();
};
