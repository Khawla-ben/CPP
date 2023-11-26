/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 18:51:30 by kben-ham          #+#    #+#             */
/*   Updated: 2023/11/26 18:51:33 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

int main(int ac, char **av)
{
	(void)av;

	if (ac > 1)
	{
		std::cout << "Error: invalid arguments" << std::endl;
		return (1);
	}
	int i = 0;
	Zombie *objArray;

	objArray = zombieHorde(5, "khawla");
	while (i < 5)
		objArray[i++].announce();
	delete [] objArray;
}