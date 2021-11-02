#include "Fixed.hpp"

//Constructors/Destructors
Fixed::Fixed(void){
	setRawBits(0);
	return;
}

Fixed::Fixed(const int n){
	setRawBits(n << this->_fracBits);
	return;
}

Fixed::Fixed(const float n){
	setRawBits(roundf(n * (1 << this->_fracBits)));
	return;
}

Fixed::Fixed(Fixed const& src){
	setRawBits(src.getRawBits());
	return;
}

Fixed::~Fixed(void){
	return;
}

//Assignement operators
Fixed&	Fixed::operator=(Fixed const& rhs){
	setRawBits(rhs.getRawBits());
	return (*this);
}

std::ostream& operator<<(std::ostream& output, Fixed const& rhs){
	output << rhs.toFloat();
	return (output);
}

//Arithmetic operators
Fixed	Fixed::operator+(Fixed const& rhs) const{
	Fixed tmp(toFloat() + rhs.toFloat());
	return (tmp);
}

Fixed	Fixed::operator-(Fixed const& rhs) const{
	Fixed tmp(toFloat() - rhs.toFloat());
	return (tmp);
}

Fixed	Fixed::operator*(Fixed const& rhs) const{
	Fixed tmp(toFloat() * rhs.toFloat());
	return (tmp);
}

Fixed	Fixed::operator/(Fixed const& rhs) const{
	Fixed tmp(toFloat() / rhs.toFloat());
	return (tmp);
}

//Comparaison operators
bool	Fixed::operator>(Fixed const& rhs) const{
	if (getRawBits() > rhs.getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator<(Fixed const& rhs) const{
	if (getRawBits() < rhs.getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator>=(Fixed const& rhs) const{
	if (getRawBits() >= rhs.getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator<=(Fixed const& rhs) const{
	if (getRawBits() <= rhs.getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator==(Fixed const& rhs) const{
	if (getRawBits() == rhs.getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator!=(Fixed const& rhs) const{
	if (getRawBits() != rhs.getRawBits())
		return (true);
	else
		return (false);
}

//Min/Max function
Fixed const&	Fixed::min(Fixed const& lhs, Fixed const& rhs){
	if (lhs.getRawBits() > rhs.getRawBits())
		return (rhs);
	else
		return (lhs);
}

Fixed&		Fixed::min(Fixed& lhs, Fixed& rhs){
	if (lhs.getRawBits() > rhs.getRawBits())
		return (rhs);
	else
		return (lhs);
}

Fixed const&	Fixed::max(Fixed const& lhs, Fixed const& rhs){
	if (lhs.getRawBits() < rhs.getRawBits())
		return (rhs);
	else
		return (lhs);
}

Fixed&		Fixed::max(Fixed& lhs, Fixed& rhs){
	if (lhs.getRawBits() < rhs.getRawBits())
		return (rhs);
	else
		return (lhs);
}

//Iterators operators
Fixed&	Fixed::operator++() {
	setRawBits(++this->_value);
	return (*this);
}

Fixed	Fixed::operator++(int) {
	Fixed tmp;
	tmp.setRawBits(this->_value++);
	return (tmp);
}

Fixed&	Fixed::operator--() {
	this->setRawBits(--this->_value);
	return (*this);
}

Fixed	Fixed::operator--(int) {
	Fixed tmp;
	tmp.setRawBits(this->_value--);
	return (tmp);
}

//Getter/Setter
int		Fixed::getRawBits(void) const{
	return (this->_value);
}

void	Fixed::setRawBits(int const raw){
	this->_value = raw;
}

//Conversions
float	Fixed::toFloat(void) const{
	return ((float)this->_value / (float)(1 << this->_fracBits));
}

int	Fixed::toInt(void) const{
	return (this->_value >> this->_fracBits);
}
