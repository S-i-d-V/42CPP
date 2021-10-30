#include "Zombie.hpp"

Zombie* zombieHorde(int n, std::string name){
	Zombie	*HordeAllocated = new Zombie[n];

	for (int i = 0; i < n; i++)
		HordeAllocated[i].set_name(name);
	return (HordeAllocated);
}
