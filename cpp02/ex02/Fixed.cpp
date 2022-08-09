#include "Fixed.hpp"

Fixed::Fixed(void)
{
	fixed_num = 0;
}

Fixed::Fixed(const Fixed &fixed)
{
	*this = fixed;
}

Fixed::Fixed(const int param)
{
	fixed_num = param * (1 << fract_bit);
}

Fixed::Fixed(const float num)
{
	fixed_num = roundf(num * (1 << fract_bit));
}

Fixed::~Fixed()
{
}

float	Fixed::toFloat(void) const
{
	return (float(fixed_num) / (1 << 8));
}

int		Fixed::toInt(void) const
{
	return (fixed_num >> 8);
}

Fixed&	Fixed::operator=(const Fixed &fixed)
{
	fixed_num = fixed.fixed_num;
	return (*this);
}

Fixed	Fixed::operator+(const Fixed &fixed)
{
	Fixed	temp(toFloat() + fixed.toFloat());
	return (temp);
}

Fixed	Fixed::operator-(const Fixed &fixed)
{
	Fixed	temp(toFloat() - fixed.toFloat());
	return (temp);
}

Fixed	Fixed::operator*(const Fixed &fixed)
{
	Fixed	temp(toFloat() * fixed.toFloat());
	return (temp);
}

Fixed	Fixed::operator/(const Fixed &fixed)
{
	Fixed	temp(toFloat() / fixed.toFloat());
	return (temp);
}

Fixed&	Fixed::operator++()
{
	fixed_num = fixed_num + 1;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	temp;
	
	temp = (*this);
	(*this).fixed_num = fixed_num + 1;
	return (temp);
}

Fixed&	Fixed::operator--()
{
	fixed_num = fixed_num - 1;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	temp;
	
	temp = (*this);
	(*this).fixed_num = fixed_num - 1;
	return (temp);
}

bool	Fixed::operator>(const Fixed &fixed) const
{
	if (fixed_num > fixed.fixed_num)
		return (true);
	else
		return (false);
}

bool	Fixed::operator<(const Fixed &fixed) const
{
	if (fixed_num < fixed.fixed_num)
		return (true);
	else
		return (false);
}

bool	Fixed::operator>=(const Fixed &fixed) const
{
	if (fixed_num >= fixed.fixed_num)
		return (true);
	else
		return (false);
}

bool	Fixed::operator<=(const Fixed &fixed) const
{
	if (fixed_num <= fixed.fixed_num)
		return (true);
	else
		return (false);
}

bool	Fixed::operator==(const Fixed &fixed) const
{
	if (fixed_num == fixed.fixed_num)
		return (true);
	else
		return (false);
}

bool	Fixed::operator!=(const Fixed &fixed) const
{
	if (fixed_num != fixed.fixed_num)
		return (true);
	else
		return (false);
}

Fixed& Fixed::min(Fixed &f1, Fixed &f2)
{
	std::cout << "not const" << std::endl;
	if (f1 > f2)
		return (f2);
	else
		return (f1);
}

const Fixed& Fixed::min(const Fixed &f1, const Fixed &f2)
{
	std::cout << "const" << std::endl;
	if (f1 > f2)
		return (f2);
	else
		return (f1);
}

Fixed& Fixed::max(Fixed &f1, Fixed &f2)
{
	std::cout << "not const" << std::endl;
	if (f1 > f2)
		return (f1);
	else
		return (f2);
}

const Fixed& Fixed::max(const Fixed &f1, const Fixed &f2)
{
	std::cout << "const" << std::endl;
	if (f1 > f2)
		return (f1);
	else
		return (f2);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return os;
}