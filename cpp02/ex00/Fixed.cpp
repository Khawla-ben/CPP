
#include "Fixed.hpp"

Fixed::Fixed()
{
	f_p_Number = 0;
	std::cout << "Default constructor called " << std::endl;
}

Fixed::Fixed(const Fixed &val)
{
	std::cout << "Copy constructor called " << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
}

void Fixed::setRawBits(int const raw )
{
	
}

Fixed::~Fixed()
{
	std::cout << "Destructor called " << std::endl;
}