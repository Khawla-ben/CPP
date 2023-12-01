/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 16:09:12 by kben-ham          #+#    #+#             */
/*   Updated: 2023/12/01 17:28:19 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include "Animal.hpp"


class  Cat : public Animal
{
public:

	Cat();
	Cat(std::string Name);

	Cat(const Cat &val);
	Cat &operator=(const Cat &a);

	void makeSound() const;
	
	~Cat();
	
};