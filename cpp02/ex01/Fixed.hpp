/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 18:54:19 by kben-ham          #+#    #+#             */
/*   Updated: 2023/11/27 21:59:53 by kben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include <iostream>


class  Fixed
{
private:

	int f_p_Number;
	static const int number_frac = 8;

public:

	Fixed();
	Fixed(const int num);
	Fixed(const float NUM);

	Fixed(const Fixed &val);
	Fixed &operator=(const Fixed &a);//Copy assignment operator called


	void setRawBits(int const raw ); //that sets the raw value of the fixed-point number.
	int getRawBits(void) const;//that returns the raw value of the fixed-point value.


	float toFloat(void) const; // fixed-point to floating-point.
	int toInt(void) const; //fixed-point to an integer .

	~Fixed();
};

std::ostream &operator<<(std::ostream &os, const Fixed &a);//insertion operator
//inserts a floating-point representation
	// of the fixed-point number into the output stream object passed as parameter.

