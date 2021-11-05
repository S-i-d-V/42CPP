#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

//Constructeurs/Destructeurs
ScavTrap::ScavTrap(){
	std::cout << "ScavTrap default constructor called" << std::endl;
	_name = "Default";
	_hitpoints = 100;
	_energy = 50;
	_damage = 20;
	return;
}

ScavTrap::ScavTrap(ScavTrap const &src){
	std::cout << "ScavTrap copy constructor called from " << src.getName() << std::endl;
	*this = src;
	return;
}

ScavTrap::ScavTrap(std::string name){
	std::cout << "ScavTrap constructor called for " << name << std::endl;
	_name = name;
	_hitpoints = 100;
	_energy = 50;
	_damage = 20;
	return;
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap destructor called for " << getName() << std::endl;
	return;
}

//Fonction membre
void	ScavTrap::attack(std::string const& target){
	std::cout << _name << " attack " << target << " with ScavTrap weapon, causing " << _damage << " points of damage." << std::endl;
}

void	ScavTrap::guardGate(){
	std::cout << _name << " have enterred in Gate Keeper mode." << std::endl;
}

//Operateurs
ScavTrap&	ScavTrap::operator=(ScavTrap const& rhs){
	_name = rhs._name;
	_hitpoints = rhs._hitpoints;
	_energy = rhs._energy;
	_damage = rhs._damage;
	return (*this);
}
