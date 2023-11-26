/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 18:51:48 by kben-ham          #+#    #+#             */
/*   Updated: 2023/11/26 18:51:51 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	if (N <= 0) {
		std::cout << "Invalid Argument\n"; exit (1);
	}

	Zombie *Zombie_Array = new (std::nothrow) Zombie[N];

	if (Zombie_Array == NULL)
	{
		std::cout << "Allocation Failed\n"; exit (1);
	}

	for (int i = 0; i < N; i++) {
		Zombie_Array[i].setName(name);
	}
	return (Zombie_Array);
}