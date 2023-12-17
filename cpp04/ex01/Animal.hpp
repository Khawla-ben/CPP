/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 15:08:52 by kben-ham          #+#    #+#             */
/*   Updated: 2023/12/05 12:59:45 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class  Animal
{
protected:

	std::string type;

public:

	Animal();
	Animal(std::string type);

	Animal(const Animal &val);
	Animal &operator=(const Animal &a);

	const std::string& getType()const;
	virtual void makeSound() const;

	virtual ~Animal();
};