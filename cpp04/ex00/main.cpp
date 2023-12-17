/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 16:17:52 by kben-ham          #+#    #+#             */
/*   Updated: 2023/12/05 13:32:58 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

int main()
{
	Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	
	std::cout << "*****************"<< std::endl;

	const WrongAnimal* Wrong = new WrongCat();
	std::cout << Wrong->getType() << " " << std::endl;
	Wrong->makeSound();
	
	delete (meta);
	delete (i);
	delete (j);
	delete (Wrong);
	
	return 0;
}
