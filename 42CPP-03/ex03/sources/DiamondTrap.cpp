#include "../includes/ClapTrap.hpp"

//Constructeurs/Destructeurs
DiamondTrap::DiamondTrap(){
	std::cout << "DiamondTrap default constructor called" << std::endl;
	ClapTrap::_name = "Default_clap_name";
	_name = "Default";
	_hitpoints = FragTrap::_hitpoints;
	_energy = ScavTrap::_energy;
	_damage = FragTrap::_damage;
	return;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src){
	std::cout << "DiamondTrap copy constructor called from " << src.getName() << std::endl;
	*this = src;
}

DiamondTrap::DiamondTrap(std::string name){
	std::cout << "DiamondTrap constructor called for " << name << std::endl;
	ClapTrap::_name = name + "_clap_name";
	_name = name;
	_hitpoints = FragTrap::_hitpoints;
	_energy = ScavTrap::_energy;
	_damage = FragTrap::_damage;
	return;
}

DiamondTrap::~DiamondTrap(){
	std::cout << "DiamondTrap destructor called for " << _name << std::endl;
	return;
}

//Fonction membre
void	DiamondTrap::attack(std::string const& target){
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(){
	std::cout << "Je m'appelle " << ClapTrap::_name << " mais mes amis m'apellent " << _name << std::endl;
}

//Operateurs
DiamondTrap&	DiamondTrap::operator=(DiamondTrap const& rhs){
	_name = rhs._name;
	_hitpoints = rhs._hitpoints;
	_energy = rhs._energy;
	_damage = rhs._damage;
	return (*this);
}

//Accesseurs
std::string DiamondTrap::getName() const{
	return (_name);
}