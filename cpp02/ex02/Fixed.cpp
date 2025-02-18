/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 18:54:30 by kben-ham          #+#    #+#             */
/*   Updated: 2023/12/01 11:01:39 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::number_frac = 8;

Fixed::Fixed()
{
	f_p_Number = 0;
}

Fixed::Fixed(const int num)
{
	f_p_Number = num << number_frac;
}

Fixed::Fixed(const float num)
{
	f_p_Number = roundf(num * (1 << number_frac));
}

Fixed::Fixed(const Fixed &val)
{
	*this = val;
}

Fixed &Fixed::operator=(const Fixed &a)
{
	if (this != &a)
	{
		this->f_p_Number = a.getRawBits();
	}
	return *this;
}

int Fixed::getRawBits(void) const
{
	return(this->f_p_Number);
}

void Fixed::setRawBits(int const raw)
{
	this->f_p_Number = raw;
}


float Fixed::toFloat(void) const
{
	return (float)f_p_Number / (float)(1 << number_frac);
}

int Fixed::toInt(void) const
{
	return f_p_Number >> number_frac;
}

bool Fixed::operator>(const Fixed &a) const
{
	return this->f_p_Number > a.f_p_Number;
}

bool Fixed::operator>=(const Fixed &a) const
{
	return this->f_p_Number >= a.f_p_Number;
}

bool Fixed::operator<=(const Fixed &a) const
{
	return this->f_p_Number <= a.f_p_Number;
}

bool Fixed::operator<(const Fixed &a) const
{
	return this->f_p_Number < a.f_p_Number;
}

bool Fixed::operator==(const Fixed &a) const
{
	return this->f_p_Number == a.f_p_Number;
}

bool Fixed::operator!=(const Fixed &a) const
{
	return this->f_p_Number != a.f_p_Number;
}

std::ostream &operator<<(std::ostream &os, const Fixed &a)
{
	os << a.toFloat();
	return(os);
}

Fixed &Fixed::operator+(const Fixed &a)
{
	this->f_p_Number = this->f_p_Number + a.f_p_Number;
	return(*this);
}

Fixed &Fixed::operator-(const Fixed &a)
{
	this->f_p_Number = this->f_p_Number - a.f_p_Number;
	return(*this);
}

Fixed Fixed::operator*(const Fixed &a)
{
	Fixed b(this->toFloat() * a.toFloat());
	return (b);
}

Fixed Fixed::operator/(const Fixed &a)
{
	Fixed b(this->toFloat() / a.toFloat());
	return (b);
}

Fixed &Fixed::operator--()
{
	this->f_p_Number--;
	return(*this);
}

Fixed Fixed::operator--(int)
{
	Fixed b = *this;
	this->f_p_Number--;
	return(b);
}

Fixed &Fixed::operator++()
{
	this->f_p_Number++;
	return(*this);
}

Fixed Fixed::operator++(int)
{
	Fixed b = *this;
	this->f_p_Number++;
	return(b);
}

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return a;
	return b;
}
const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return a;
	return b;
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return a;
	return b;
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return a;
	return b;
}


Fixed::~Fixed() {}