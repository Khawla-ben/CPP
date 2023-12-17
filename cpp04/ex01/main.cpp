/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 16:17:52 by kben-ham          #+#    #+#             */
/*   Updated: 2023/12/05 14:03:58 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"
#include "Dog.hpp"
#include "Animal.hpp"

int main()
{
	int a = 2;
	Animal *Array[a];

	for (int i = 0; i < a; i++) {
		if (i < a/2)
		{
			Array[i] = new Dog();
			Array[i]->makeSound();
		}
		else{
			Array[i] = new Cat();
			Array[i]->makeSound();
		}
	}
	
	for (int i = 0; i < a; i++) {
		delete Array[i];
	}
	std::cout << "*****************"<< std::endl;
	
	Cat Obj;
	Cat obj1 = Obj;
}