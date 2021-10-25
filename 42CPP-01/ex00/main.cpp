#include "Zombie.hpp"

int	main(int ac, char **av)
{
	std::cout << "\033[34;1mMethode 1 :\033[0m" << std::endl;
	randomChump("Fred");
	std::cout << std::endl;

	std::cout << "\033[34;1mMethode 2 :\033[0m" << std::endl;
	Zombie *ZombieAlloced;
	ZombieAlloced = newZombie("Mathieu");
	ZombieAlloced->announce();
	delete ZombieAlloced;

	return (0);
}