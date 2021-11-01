#include "Fixed.hpp"

int		main(){
	std::cout << "\033[34;1mConstructeurs :\033[0m" << std::endl;
	Fixed	a;
	Fixed	b(a);
	Fixed	c;

	std::cout << std::endl << "\033[34;1mAssignation :\033[0m" << std::endl;
	c = b;

	std::cout << std::endl << "\033[34;1mRecuperations :\033[0m" << std::endl;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

	std::cout << std::endl << "\033[34;1mDestructeurs :\033[0m" << std::endl;
	return (0);
}