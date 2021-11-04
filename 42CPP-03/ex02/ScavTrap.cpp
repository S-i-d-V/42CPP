#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

//Constructeurs/Destructeurs
ScavTrap::ScavTrap(){
	std::cout << "ScavTrap default constructor called" << std::endl;
	setName("Default");
	setHitpoints(100);
	setEnergy(50);
	setDamage(20);
	return;
}

ScavTrap::ScavTrap(ScavTrap const &src){
	std::cout << "ScavTrap copy constructor called from " << src.getName() << std::endl;
	*this = src;
}

ScavTrap::ScavTrap(std::string name){
	std::cout << "ScavTrap constructor called for " << name << std::endl;
	setName(name);
	setHitpoints(100);
	setEnergy(50);
	setDamage(20);
	return;
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap destructor called for " << getName() << std::endl;
	return;
}

//Fonction membre
void	ScavTrap::attack(std::string const& target){
	std::cout << getName() << " attack " << target << " with ScavTrap weapon, causing " << getDamage() << " points of damage." << std::endl;
}

void	ScavTrap::guardGate(){
	std::cout << getName() << " have enterred in Gate Keeper mode." << std::endl;
}

//Operateurs
ScavTrap&	ScavTrap::operator=(ScavTrap const& rhs){
	setName(rhs.getName());
	setHitpoints(rhs.getHitpoints());
	setEnergy(rhs.getEnergy());
	setDamage(rhs.getDamage());
}
