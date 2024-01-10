/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 16:41:24 by kben-ham          #+#    #+#             */
/*   Updated: 2023/12/24 16:15:46 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


Base::~Base(){}

Base *Base::generate(void)
{
	std::srand(static_cast<unsigned int>(std::time(0)));
	const std::string strings[] = {"A", "B", "C"};
	int r = rand() % 3;
	Base *tmp = NULL;
	if (strings[r] == "A")
	{
		std::cout << "Create A "<< std::endl;
		tmp = new A();
	}
	else if (strings[r] == "B")
	{
		std::cout << "Create B "<< std::endl;
		tmp = new B();
	}
	else if (strings[r] == "C")
	{
		std::cout << "Create C "<< std::endl;
		tmp = new C();
	}
	return (tmp);
}

void Base::identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "The actual type of the object pointed to by p: A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "The actual type of the object pointed to by p: B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "The actual type of the object pointed to by p: C" << std::endl;
}

void Base::identify(Base &p)
{
	try
	{
		Base &a = dynamic_cast<A &>(p);
		std::cout <<  "The actual type of the object pointed to by " << &a<< " : A" << std::endl;
		return;
	}
	catch(const std::exception& e){}
	try
	{
		Base &a = dynamic_cast<B &>(p);
		std::cout << "The actual type of the object pointed to by " << &a<< " : B" << std::endl;
		return;
	}
	catch(const std::exception& e){}
	try
	{
		Base &a = dynamic_cast<C &>(p);
		std::cout << "The actual type of the object pointed to by " << &a<< " : C" << std::endl;
		return;
	}
	catch(const std::exception& e){}
}