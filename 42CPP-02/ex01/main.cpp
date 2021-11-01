#include "Fixed.hpp"

int		main(){
	std::cout << "\033[34;1mConstructeurs :\033[0m" << std::endl;
	Fixed 		a;
	Fixed const	b(10);
	Fixed const	c(42.42f);
	Fixed		d(b);

	std::cout << std::endl << "\033[34;1mAssignation :\033[0m" << std::endl;
	a = Fixed(1234.4321f);

	std::cout << std::endl << "\033[34;1mAffichage (Operateur <<):\033[0m" << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	std::cout << d << std::endl;

	std::cout << std::endl << "\033[34;1mConversions:\033[0m" << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;

	std::cout << std::endl << "\033[34;1mDestructeurs :\033[0m" << std::endl;
	return (0);
}