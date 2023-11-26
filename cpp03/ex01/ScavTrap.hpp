/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 18:47:19 by kben-ham          #+#    #+#             */
/*   Updated: 2023/11/26 18:47:22 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include "ClapTrap.hpp"


class  ScavTrap : private ClapTrap
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
