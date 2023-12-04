/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 20:42:28 by kben-ham          #+#    #+#             */
/*   Updated: 2023/12/02 20:47:30 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class  WrongAnimal
{
protected:

	std::string type;

public:

	WrongAnimal();
	WrongAnimal(std::string type);

	WrongAnimal(const WrongAnimal &val);
	WrongAnimal &operator=(const WrongAnimal &a);

	const std::string& getType()const;
	void makeSound() const;

	~WrongAnimal();
};