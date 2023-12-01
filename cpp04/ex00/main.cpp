/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 16:17:52 by kben-ham          #+#    #+#             */
/*   Updated: 2023/12/01 20:32:23 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	// std::cout << j->getType() << " " << std::endl;
	// std::cout << i->getType() << " " << std::endl;
	// i->makeSound();
	// j->makeSound();
	// meta->makeSound();
	
	// delete (meta);
	// delete (i);
	// delete (j);
	
	return 0;
}