#include "../includes/ClapTrap.hpp"

//Constructeurs/Destructeurs
FragTrap::FragTrap(){
	std::cout << "FragTrap default constructor called" << std::endl;
	_name = "Default";
	_hitpoints = 100;
	_energy = 100;
	_damage = 30;
	return;
}

FragTrap::FragTrap(FragTrap const &src){
	std::cout << "FragTrap copy constructor called from " << src.getName() << std::endl;
	*this = src;
	return;
}

FragTrap::FragTrap(std::string name){
	std::cout << "FragTrap constructor called for " << name << std::endl;
	_name = name;
	_hitpoints = 100;
	_energy = 100;
	_damage = 30;
	return;
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap destructor called for " << getName() << std::endl;
	return;
}

//Fonction membre
void	FragTrap::attack(std::string const& target){
	std::cout << _name << " attack " << target << " with FragTrap weapon, causing " << _damage << " points of damage." << std::endl;
}

void	FragTrap::highFivesGuys(){
	std::cout << _name << " said : 'Amazing guyz ! High five !'" << std::endl;
}

//Operateurs
FragTrap&	FragTrap::operator=(FragTrap const& rhs){
	_name = rhs._name;
	_hitpoints = rhs._hitpoints;
	_energy = rhs._energy;
	_damage = rhs._damage;
	return (*this);
}
