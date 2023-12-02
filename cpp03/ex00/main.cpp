/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 18:50:12 by kben-ham          #+#    #+#             */
/*   Updated: 2023/12/02 16:15:11 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap obj("me");

	obj.takeDamage(2);
	obj.attack("enemy");
	obj.beRepaired(5);
	obj.takeDamage(5);
}