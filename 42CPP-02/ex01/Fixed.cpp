#include "Fixed.hpp"

//Constructors/Destructors

Fixed::Fixed(void){
	setRawBits(0);
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n){
	setRawBits(n << this->_fracBits);
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float n){
	setRawBits(roundf(n * (1 << this->_fracBits)));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(Fixed const& src){
	setRawBits(src.getRawBits());
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed(void){
	std::cout << "Destructor called" << std::endl;
}

//Operators

Fixed&	Fixed::operator=(Fixed const& rhs){
	std::cout << "Assignation operator called" << std::endl;
	setRawBits(rhs.getRawBits());
	return (*this);
}

std::ostream& operator<<(std::ostream& output, Fixed const& rhs){
	output << rhs.toFloat();
	return (output);
}

//Getter/Setter

int		Fixed::getRawBits(void) const{
	//std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits(int const raw){
	//std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}

//Conversions

float	Fixed::toFloat(void) const{
	return ((float)this->_value / (float)(1 << this->_fracBits));
}

int	Fixed::toInt(void) const{
	return (this->_value >> this->_fracBits);
}