/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 16:09:15 by kben-ham          #+#    #+#             */
/*   Updated: 2023/12/03 15:00:45 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include "Animal.hpp"


class  Dog : public Animal
{
public:

	Dog();

	Dog(const Dog &val);
	Dog &operator=(const Dog &a);

	void makeSound() const;

	~Dog();
};