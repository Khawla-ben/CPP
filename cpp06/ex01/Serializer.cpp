/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 13:58:38 by kben-ham          #+#    #+#             */
/*   Updated: 2023/12/23 16:20:37 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"


Serializer::Serializer()
{
	std::cout << "Constructor called" << std::endl;
}

Serializer::Serializer(const Serializer &a)
{
	*this = a;
}

Serializer &Serializer::operator=(const Serializer &a)
{
	std::cout << "Copy Assingnement Operator Called" << std::endl;
	(void)a;
	return *this;
}

uintptr_t Serializer::serializer(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserializer(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}

Serializer::~Serializer()
{
	std::cout << "Destructor called" << std::endl;
}