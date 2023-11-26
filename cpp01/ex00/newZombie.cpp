/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 18:51:13 by kben-ham          #+#    #+#             */
/*   Updated: 2023/11/26 18:51:16 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie* newZombie(std::string name)
{
	Zombie *obj = new (std::nothrow) Zombie(name);
	
	if (obj == NULL) {
		std::cout << "Allocation Failed\n";
		exit (1);
	}
	return (obj);
}
