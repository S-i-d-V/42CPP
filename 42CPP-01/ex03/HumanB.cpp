#include "Western.hpp"

HumanB::HumanB(std::string name_chosen): name(name_chosen){
	std::cout << name_chosen << " has been created." << std::endl;
}

HumanB::~HumanB(void){
	std::cout << name << " has been destroyed." << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon_chosen){
	weapon = &weapon_chosen;
}

void	HumanB::attack(void){
	std::cout << name << " attacks with his " << weapon->getType() << "." << std::endl;
}
