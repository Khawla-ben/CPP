
#include "Fixed.hpp"

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
	if (this != &a) { //self-assignment 
		this->f_p_Number = a.f_p_Number;
	}
	return *this;
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

Fixed &Fixed::operator++()//++a
{
	this->f_p_Number++;
	return(*this);
}

Fixed Fixed::operator++(int)//a++
{
	Fixed b = *this;
	this->f_p_Number++;
	return(b);
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

Fixed::~Fixed()
{
	// std::cout << "Destructor called " << std::endl;
}
