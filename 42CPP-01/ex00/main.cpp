#include "Zombie.hpp"

int	main(int ac, char **av)
{
	randomChump("Fred");
	std::cout << std::endl;

	Zombie *ZombieAlloced;
	ZombieAlloced = newZombie("Mathieu");
	ZombieAlloced->announce();
	delete ZombieAlloced;

	return (0);
}