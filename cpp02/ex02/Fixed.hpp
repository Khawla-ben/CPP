
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
	Fixed &operator=(const Fixed &a);


	void setRawBits(int const raw );
	int getRawBits(void) const;


	float toFloat(void) const;
	int toInt(void) const;

	Fixed &operator>(const Fixed &a);
	Fixed &operator<(const Fixed &a);
	Fixed operator>=(const Fixed &a);
	Fixed operator<=(const Fixed &a);
	Fixed operator==(const Fixed &a);
	Fixed operator!=(const Fixed &a);

	//
	Fixed &operator+(const Fixed &a);
	Fixed &operator-(const Fixed &a);
	Fixed operator*(const Fixed &a);
	Fixed operator/(const Fixed &a);
	///
	///
	Fixed &operator--();//--a
	Fixed operator--(int);//a--
	Fixed &operator++();//++a
	Fixed operator++(int);//a++


	// static Fixed &min(Fixed &a, Fixed &b);
	// const static Fixed &min(const Fixed &a, const Fixed &b);
	// //
	// static Fixed &max(Fixed &a, Fixed &b);
	// const static Fixed &max(const Fixed &a, const Fixed &b);
	~Fixed();
};

std::ostream &operator<<(std::ostream &os, const Fixed &a);

