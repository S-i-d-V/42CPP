#include "Zombie.hpp"

int	main(int ac, char **av){
	std::cout << "\033[34;1mHorde de Georges :\033[0m" << std::endl;
	int NbZombie = 2;
	Zombie *HordeAlloced = zombieHorde(NbZombie, "Georges");
	std::cout << "\033[34;1mPremiere case de l'array de zombie return :\033[0m" << std::endl;
	HordeAlloced->announce();
	std::cout << "\033[34;1mTout les zombies :\033[0m" << std::endl;
	for (int i = 0; i < NbZombie; i++)
		HordeAlloced[i].announce();
	delete[] HordeAlloced;

	std::cout << std::endl << "\033[34;1mHorde de Fred :\033[0m" << std::endl;
	NbZombie = 4;
	HordeAlloced = zombieHorde(NbZombie, "Fred");
	std::cout << "\033[34;1mPremiere case de l'array de zombie return :\033[0m" << std::endl;
	HordeAlloced->announce();
	std::cout << "\033[34;1mTout les zombies :\033[0m" << std::endl;
	for (int i = 0; i < NbZombie; i++)
		HordeAlloced[i].announce();
	delete[] HordeAlloced;

	std::cout << std::endl << "\033[34;1mHorde de Mike :\033[0m" << std::endl;
	NbZombie = 3;
	HordeAlloced = zombieHorde(NbZombie, "Mike");
	std::cout << "\033[34;1mPremiere case de l'array de zombie return :\033[0m" << std::endl;
	HordeAlloced->announce();
	std::cout << "\033[34;1mTout les zombies :\033[0m" << std::endl;
	for (int i = 0; i < NbZombie; i++)
		HordeAlloced[i].announce();
	delete[] HordeAlloced;

	return (0);
}