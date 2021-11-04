#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(){
	std::cout << "\033[34;1mConstructeur FragTrap :\033[0m" << std::endl;
	FragTrap	b("Bob");
	std::cout << "\033[34;1mConstructeur DiamondTrap :\033[0m" << std::endl;
	DiamondTrap c("Mike");

	std::cout << std::endl << "\033[34;1mHP Initiaux :\033[0m" << std::endl;
	std::cout << b.getName() << " have " << b.getHitpoints() << " hitpoints." << std::endl;
	std::cout << c.getName() << " have " << c.getHitpoints() << " hitpoints." << std::endl;

	std::cout << std::endl << "\033[34;1mFragTrap se fait attaquer :\033[0m" << std::endl;
	c.attack(b.getName());
	b.takeDamage(c.getDamage());
	std::cout << b.getName() << " have now " << b.getHitpoints() << " hitpoints." << std::endl;
	std::cout << b.getName() << " drink a heal potion (+10HP)." << std::endl;
	b.beRepaired(10);
	std::cout << b.getName() << " have now " << b.getHitpoints() << " hitpoints." << std::endl;

	std::cout << std::endl << "\033[34;1mDiamondTrap attaque :\033[0m" << std::endl;
	b.attack(b.getName());
	c.takeDamage(b.getDamage());
	std::cout << c.getName() << " have now " << c.getHitpoints() << " hitpoints." << std::endl;
	std::cout << c.getName() << " drink a heal potion (+10HP)." << std::endl;
	c.beRepaired(10);
	std::cout << c.getName() << " have now " << c.getHitpoints() << " hitpoints." << std::endl;

	std::cout << std::endl << "\033[34;1mAcces a toutes les fonctions membres:\033[0m" << std::endl;
	c.whoAmI();
	c.guardGate();
	c.highFivesGuys();

	std::cout << std::endl << "\033[34;1mDestructeurs :\033[0m" << std::endl;
	return (0);
}