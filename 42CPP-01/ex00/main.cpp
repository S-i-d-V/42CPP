#include "Zombie.hpp"

int	main(int ac, char **av){
	std::cout << "\033[34;1mMethode 1 :\033[0m" << std::endl;
	randomChump("Fred");
	std::cout << std::endl;

	std::cout << "\033[34;1mMethode 2 :\033[0m" << std::endl;
	Zombie *ZombieAlloced = newZombie("Georges");
	ZombieAlloced->announce();
	delete ZombieAlloced;
	std::cout << std::endl;

	std::cout << "\033[34;1mMethode 3 :\033[0m" << std::endl;
	Zombie Zombie("Mike");
	Zombie.announce();
	return (0);
}