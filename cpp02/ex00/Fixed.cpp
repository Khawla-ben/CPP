/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 18:54:04 by kben-ham          #+#    #+#             */
/*   Updated: 2023/11/27 21:53:41 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

Fixed::Fixed()
{
	f_p_Number = 0;
	std::cout << "Default constructor called " << std::endl;
}

Fixed::Fixed(const Fixed &val)
{
	std::cout << "Copy constructor called " << std::endl;
	*this = val;
}

Fixed &Fixed::operator=(const Fixed &a) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &a)
	{
		this->f_p_Number = a.getRawBits();
	}
	return *this;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return(this->f_p_Number);
}

void Fixed::setRawBits(int const raw )
{
	this->f_p_Number = raw;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called " << std::endl;
}
