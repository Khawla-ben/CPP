/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 18:47:19 by kben-ham          #+#    #+#             */
/*   Updated: 2023/12/02 14:40:48 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include "ClapTrap.hpp"

class  ScavTrap : public ClapTrap
{
public:

	ScavTrap();
	ScavTrap(std::string Name);

	ScavTrap(const ScavTrap &val);
	ScavTrap &operator=(const ScavTrap &a);


	void attack(const std::string& target);
	void guardGate();

	~ScavTrap();
};
