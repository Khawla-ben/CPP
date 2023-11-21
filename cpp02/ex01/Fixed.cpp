
#include "Fixed.hpp"

Fixed::Fixed()
{
	f_p_Number = 0;
	std::cout << "Default constructor called " << std::endl;
}

Fixed::Fixed(const int num)
{
	std::cout << "Int constructor called" << std::endl;
	f_p_Number = num << number_frac;
}

Fixed::Fixed(const float num)
{
	std::cout << "Float constructor called" << std::endl;
	f_p_Number = roundf(num * (1 << number_frac));
}

Fixed::Fixed(const Fixed &val)
{
	std::cout << "Copy constructor called " << std::endl;
	*this = val;
}

Fixed &Fixed::operator=(const Fixed &a)
{
	std::cout << "Copy assignment operator called" << std::endl;
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

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
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
	std::cout << "Destructor called " << std::endl;
}
