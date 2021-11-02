#include "Fixed.hpp"

int		main(){
	Fixed		a;
	Fixed const b(Fixed(5.05f) * Fixed(2));

	std::cout << std::endl << "\033[34;1mIncrementation/Decrementation :\033[0m" << std::endl;
	std::cout << "Initialement a vaut : " << a << std::endl;
	// Le resultat est appliquer directement;
	std::cout << "Prefix incrementation ++a : " << ++a << std::endl << a << std::endl;
	// Le resultat est appliquer apres;
	std::cout << "Postfix incrementation a++ :" << a++ << std::endl << a << std::endl;
	// Le resultat est appliquer directement;
	std::cout << "Prefix decrementation --a :" << --a << std::endl << a << std::endl;
	// Le resultat est appliquer apres;
	std::cout << "Postfix decrementation a-- :" << a-- << std::endl << a << std::endl;

	std::cout << std::endl << "\033[34;1mArithmetic operators :\033[0m" << std::endl;
	std::cout << a << " + " << b << " = " << (a + b) << std::endl;
	std::cout << a << " - " << b << " = " << (a - b) << std::endl;
	std::cout << b << " * " << b << " = " << (b * b) << std::endl;
	std::cout << b << " / " << b << " = " << (b / b) << std::endl;

	std::cout << std::endl << "\033[34;1mComparaison :\033[0m" << std::endl;
	std::cout << a << " est-il superieur a " << b << " ? ; " << (a > b) << std::endl;
	std::cout << a << " est-il inferieur a " << b << " ? ; " << (a < b) << std::endl;
	std::cout << a << " est-il superieur ou egal a " << b << " ? ; " << (a >= b) << std::endl;
	std::cout << a << " est-il inferieur ou egal a " << b << " ? ; " << (a <= b) << std::endl;
	std::cout << a << " est-il egal a " << b << " ? ; " << (a == b) << std::endl;
	std::cout << a << " est-il different de " << b << " ? ; " << (a != b) << std::endl;

	std::cout << std::endl << "\033[34;1mFonction min/max :\033[0m" << std::endl;
	std::cout << "Entre " << a << " et " << b << " lequel est le plus petit ? " << Fixed::min(a, b) << std::endl;
	std::cout << "Entre " << a << " et " << b << " lequel est le plus grand ? " << Fixed::max(a, b) << std::endl;

	return (0);
}
