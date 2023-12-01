/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 18:54:07 by kben-ham          #+#    #+#             */
/*   Updated: 2023/11/30 21:27:43 by kben-ham         ###   ########.fr       */
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
	Fixed(const Fixed &val);
	Fixed &operator=(const Fixed &a);//Copy assignment operator overload called

	void setRawBits(int const raw );//that sets the raw value of the fixed-point number.
	int getRawBits(void) const;//that returns the raw value of the fixed-point value.
	~Fixed();
};

