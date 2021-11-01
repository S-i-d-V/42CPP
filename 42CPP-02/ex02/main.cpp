#include "Fixed.hpp"

int		main(){
	std::cout << "\033[34;1mConstructeurs :\033[0m" << std::endl;
	Fixed		a;
	Fixed const b(Fixed(5.05f) * Fixed(2));

	std::cout << std::endl << "\033[34;1mAffichage (Operateur +):\033[0m" << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << std::endl << "\033[34;1mAffichage (Constructeur alternatif):\033[0m" << std::endl;
	std::cout << b << std::endl;

	std::cout << std::endl << "\033[34;1mFonction max :\033[0m" << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;

	std::cout << std::endl << "\033[34;1mDestructeurs :\033[0m" << std::endl;
	return (0);
}