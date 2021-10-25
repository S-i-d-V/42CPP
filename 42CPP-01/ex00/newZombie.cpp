#include "Zombie.hpp"

Zombie	*newZombie(std::string name){
	Zombie *ZombieAlloced = new Zombie(name);
	return (ZombieAlloced);
}
