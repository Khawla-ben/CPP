/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 18:54:34 by kben-ham          #+#    #+#             */
/*   Updated: 2023/12/01 11:02:06 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include <iostream>

class  Fixed
{
private:

	int f_p_Number;
	static const int number_frac;

public:

	Fixed();
	Fixed(const int num);
	Fixed(const float NUM);

	Fixed(const Fixed &val);
	Fixed &operator=(const Fixed &a);


	void setRawBits(int const raw );
	int getRawBits(void) const;


	float toFloat(void) const;
	int toInt(void) const;

	bool operator>(const Fixed &a) const;
	bool operator<(const Fixed &a) const;
	bool operator>=(const Fixed &a) const;
	bool operator<=(const Fixed &a) const;
	bool operator==(const Fixed &a) const;
	bool operator!=(const Fixed &a) const;


	Fixed &operator+(const Fixed &a);
	Fixed &operator-(const Fixed &a);
	Fixed operator*(const Fixed &a);
	Fixed operator/(const Fixed &a);


	Fixed &operator--();
	Fixed operator--(int);
	Fixed &operator++();
	Fixed operator++(int);


	static Fixed &min(Fixed &a, Fixed &b);
	const static Fixed& min(const Fixed &a, const Fixed &b);

	static Fixed &max(Fixed &a, Fixed &b);
	const static Fixed& max(const Fixed &a, const Fixed &b);
	
	~Fixed();
};

std::ostream &operator<<(std::ostream &os, const Fixed &a);

