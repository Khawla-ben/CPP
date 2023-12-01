/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 18:54:19 by kben-ham          #+#    #+#             */
/*   Updated: 2023/11/30 16:09:04 by kben-ham         ###   ########.fr       */
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

	~Fixed();
};

std::ostream &operator<<(std::ostream &os, const Fixed &a);

