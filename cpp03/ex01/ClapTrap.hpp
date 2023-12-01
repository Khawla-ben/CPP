/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 18:47:57 by kben-ham          #+#    #+#             */
/*   Updated: 2023/12/01 14:49:19 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include <iostream>


class  ClapTrap
{
protected:

	std::string Name;
	int Hit_points;
	int Energy_points;
	int Attack_damage;

public:

	ClapTrap();
	ClapTrap(std::string Name);

	ClapTrap(const ClapTrap &val);
	ClapTrap &operator=(const ClapTrap &a);


	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);


	~ClapTrap();
};