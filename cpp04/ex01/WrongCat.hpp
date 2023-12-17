/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 20:42:35 by kben-ham          #+#    #+#             */
/*   Updated: 2023/12/05 12:38:34 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

class  WrongCat : public WrongAnimal
{
public:

	WrongCat();

	WrongCat(const WrongCat &val);
	WrongCat &operator=(const WrongCat &a);

	void makeSound() const;
	
	~WrongCat();
	
};