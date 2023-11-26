/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 18:50:12 by kben-ham          #+#    #+#             */
/*   Updated: 2023/11/26 18:50:16 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"

int main()
{
	ClapTrap obj("me");
	ClapTrap obj2("ME");


	obj.takeDamage(2);
	obj.attack("enemy");
	obj.beRepaired(5);
	obj2.takeDamage(5);
	
}