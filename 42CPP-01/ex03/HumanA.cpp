#include "Western.hpp"

HumanA::HumanA(std::string chosen_name, Weapon& weapon_chosen): name(chosen_name), weapon(weapon_chosen){
	std::cout << name << " has been created with a " << weapon.getType() << "." << std::endl;
}

HumanA::~HumanA(void){
	std::cout << name << " has been destroyed." << std::endl;
}

void	HumanA::attack(void){
	std::cout << name << " attacks with his " << weapon.getType() << "." << std::endl;
}
