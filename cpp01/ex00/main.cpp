/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 18:50:55 by kben-ham          #+#    #+#             */
/*   Updated: 2023/11/26 18:50:58 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie obj1("foo");
	Zombie *obj2;

	obj1.announce();

	randomChump("foo1");
	obj2 = newZombie("khawla");
	obj2->announce();
	delete obj2;
}