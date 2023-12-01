/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 18:54:07 by kben-ham          #+#    #+#             */
/*   Updated: 2023/12/01 11:00:28 by kben-ham         ###   ########.fr       */
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
	Fixed &operator=(const Fixed &a);

	void setRawBits(int const raw );
	int getRawBits(void) const;
	~Fixed();
};

