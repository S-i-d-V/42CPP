#include "Zombie.hpp"

int	main(int ac, char **av)
{
	std::cout << "\033[34;1mHorde de Mike :\033[0m" << std::endl;
	int NbZombie = 1;
	Zombie *HordeAlloced = zombieHorde(NbZombie, "Georges");
	for (int i = 0; i < NbZombie; i++)
		HordeAlloced[i].announce();
	delete[] HordeAlloced;

	std::cout << "\033[34;1mHorde de Mike :\033[0m" << std::endl;
	NbZombie = 4;
	HordeAlloced = zombieHorde(NbZombie, "Fred");
	for (int i = 0; i < NbZombie; i++)
		HordeAlloced[i].announce();
	delete[] HordeAlloced;

	std::cout << "\033[34;1mHorde de Mike :\033[0m" << std::endl;
	NbZombie = 2;
	HordeAlloced = zombieHorde(NbZombie, "Mike");
	for (int i = 0; i < NbZombie; i++)
		HordeAlloced[i].announce();
	delete[] HordeAlloced;

	return (0);
}