

#pragma once

#include <iostream>


class  Fixed
{
private:

	int f_p_Number;
	static const int number_frac = 8;

public:

	Fixed();
	Fixed(const Fixed &val);
	Fixed &operator=(const Fixed &a);//Copy assignment operator called

	void setRawBits(int const raw );//that sets the raw value of the fixed-point number.
	int getRawBits(void) const;//that returns the raw value of the fixed-point value.

	~Fixed();
};

