/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 18:47:49 by kben-ham          #+#    #+#             */
/*   Updated: 2023/12/02 15:35:41 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ClapTrap obj("me");

	obj.takeDamage(2);
	obj.attack("enemy");
	obj.beRepaired(5);
	obj.takeDamage(5);

	std::cout << "***********\n";
	
	ScavTrap obj2("1");
	
	obj2.takeDamage(2);
	obj2.ClapTrap::attack("llo");
	obj2.attack("enemy");
	obj2.beRepaired(5);
	obj2.takeDamage(5);
	obj2.guardGate();
	
}