#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int	fixed_num;
		static const int	fract_bit = 8;

	public:
		Fixed();
		Fixed(const int	param);
		Fixed(const Fixed &fixed);
		Fixed(const float num);
		~Fixed();

		Fixed&	operator=(const Fixed &fixed);
		float	toFloat(void) const;
		int		toInt(void) const;

};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

# endif