#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(){
	std::cout << "\033[34;1mConstructeur ScavTrap :\033[0m" << std::endl;
	ScavTrap a("Mike");
	std::cout << "\033[34;1mConstructeur FragTrap :\033[0m" << std::endl;
	FragTrap b("Bob");

	std::cout << std::endl << "\033[34;1mHP Initiaux :\033[0m" << std::endl;
	std::cout << a.getName() << " have " << a.getHitpoints() << " hitpoints." << std::endl;
	std::cout << b.getName() << " have " << b.getHitpoints() << " hitpoints." << std::endl;

	std::cout << std::endl << "\033[34;1mFragTrap se fait attaquer :\033[0m" << std::endl;
	a.attack(b.getName());
	b.takeDamage(a.getDamage());
	std::cout << b.getName() << " have now " << b.getHitpoints() << " hitpoints." << std::endl;
	std::cout << b.getName() << " drink a heal potion (+10HP)." << std::endl;
	b.beRepaired(10);
	std::cout << b.getName() << " have now " << b.getHitpoints() << " hitpoints." << std::endl;

	std::cout << std::endl << "\033[34;1mFragTrap attaque :\033[0m" << std::endl;
	b.attack(a.getName());
	a.takeDamage(b.getDamage());
	std::cout << a.getName() << " have now " << a.getHitpoints() << " hitpoints." << std::endl;
	std::cout << a.getName() << " drink a heal potion (+10HP)." << std::endl;
	a.beRepaired(10);
	std::cout << a.getName() << " have now " << a.getHitpoints() << " hitpoints." << std::endl;

	std::cout << std::endl << "\033[34;1mFonctions membres FragTrap :\033[0m" << std::endl;
	b.highFivesGuys();

	std::cout << std::endl << "\033[34;1mDestructeur :\033[0m" << std::endl;
	return (0);
}