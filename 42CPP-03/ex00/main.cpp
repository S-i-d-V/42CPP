#include "include/ClapTrap.hpp"

int	main(){
	std::cout << "\033[34;1mConstructeurs :\033[0m" << std::endl;
	ClapTrap a("Mike");
	ClapTrap b("Bob");

	std::cout << std::endl << "\033[34;1mHP Initiaux :\033[0m" << std::endl;
	std::cout << a.getName() << " have " << a.getHitpoints() << " hitpoints." << std::endl;
	std::cout << b.getName() << " have " << b.getHitpoints() << " hitpoints." << std::endl;

	std::cout << std::endl << "\033[34;1mClapTrap A attaque :\033[0m" << std::endl;
	a.attack(b.getName());
	b.takeDamage(a.getDamage());
	std::cout << "\033[34;1mClapTrap B se soigne :\033[0m" << std::endl;
	std::cout << b.getName() << " drink a heal potion (+10HP)." << std::endl;
	b.beRepaired(10);

	std::cout << std::endl << "\033[34;1mClapTrap B attaque :\033[0m" << std::endl;
	b.attack(a.getName());
	a.takeDamage(b.getDamage());
	std::cout << "\033[34;1mClapTrap A se soigne :\033[0m" << std::endl;
	std::cout << a.getName() << " drink a heal potion (+10HP)." << std::endl;
	a.beRepaired(10);

	std::cout << std::endl << "\033[34;1mDestructeurs :\033[0m" << std::endl;
	return (0);
}