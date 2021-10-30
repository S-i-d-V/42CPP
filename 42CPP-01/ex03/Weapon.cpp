#include "Western.hpp"

Weapon::Weapon(std::string weapon){
	std::cout << "A weapon of type " << weapon << " has been created." << std::endl;
	setType(weapon);
}

Weapon::~Weapon(void){
	std::cout << "A weapon of type " << this->type << " has been destroyed." << std::endl;
}

void	Weapon::setType(std::string weapon){
	this->type = weapon;
}

std::string	Weapon::getType(void){
	return (this->type);
}

