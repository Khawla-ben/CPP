/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 16:17:52 by kben-ham          #+#    #+#             */
/*   Updated: 2023/12/04 14:25:38 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat.hpp"
#include "Brain.hpp"
#include "Dog.hpp"
#include "Animal.hpp"

void f()
{
	system ("leaks brain");
}

int main()
{
	
	int a = 2;
	Animal *Array[a];

	atexit(f);
	for (int i = 0; i < a; i++) {
		if (i < a/2)
			Array[i] = new Dog();
		else
			Array[i] = new Cat();
	}
	
	for (int i = 0; i < a; i++) {
		delete Array[i];
	}
	
}