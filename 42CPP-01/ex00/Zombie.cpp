#include "Zombie.hpp"

Zombie::Zombie(std::string new_name){
	this->name = new_name;
	std::cout << "A zombie has been created." << std::endl;
	return;
}

Zombie::~Zombie(void){
	std::cout << this->name << " has been destroyed." << std::endl;
	return;
}

void	Zombie::announce(void){
	std::cout << "<" << this->name << "> BraiiiiiiinnnzzzZ" << std::endl;
}
