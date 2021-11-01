#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <math.h>

class	Fixed{
	public:
		Fixed(void);
		Fixed(const int raw);
		Fixed(const float raw);
		Fixed(Fixed const& src);
		~Fixed(void);

		Fixed&	operator=(Fixed const& rhs);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		float	toFloat(void) const;
		int		toInt(void) const;

	private:
		int					_value;
		static const int	_fracBits = 8;
};

std::ostream& operator<<(std::ostream& output, Fixed const& rhs);

#endif