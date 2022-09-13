#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	fixed_num = 0;
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed::Fixed(const int param)
{
	std::cout << "Int constructor called" << std::endl;
	fixed_num = param << fract_bit;
}

Fixed::Fixed(const float num)
{
	std::cout << "Float constructor called" << std::endl;
	fixed_num = roundf(num * (1 << fract_bit));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

float	Fixed::toFloat(void) const
{
	return (float(fixed_num) / (1 << fract_bit));
}

int		Fixed::toInt(void) const
{
	return (fixed_num >> fract_bit);
}

Fixed&	Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	fixed_num = fixed.fixed_num;
	return (*this);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return os;
}