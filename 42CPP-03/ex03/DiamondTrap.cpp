#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

//Constructeurs/Destructeurs
DiamondTrap::DiamondTrap(){
	std::cout << "DiamondTrap default constructor called" << std::endl;
	ClapTrap::setName("Default_clap_name");
	DiamondTrap::setName("Default");
	setHitpoints(FragTrap::getHitpoints());
	setEnergy(ScavTrap::getEnergy());
	setDamage(FragTrap::getDamage());
	return;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src){
	std::cout << "DiamondTrap copy constructor called from " << src.getName() << std::endl;
	*this = src;
}

DiamondTrap::DiamondTrap(std::string name){
	std::cout << "DiamondTrap constructor called for " << name << std::endl;
	ClapTrap::setName(name + "_clap_name");
	DiamondTrap::setName(name);
	setHitpoints(FragTrap::getHitpoints());
	setEnergy(ScavTrap::getEnergy());
	setDamage(FragTrap::getDamage());
	return;
}

DiamondTrap::~DiamondTrap(){
	std::cout << "DiamondTrap destructor called for " << getName() << std::endl;
	return;
}

//Fonction membre
void	DiamondTrap::attack(std::string const& target){
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(){
	std::cout << "Je m'appelle " << ClapTrap::getName() << " mais mes amis m'apellent " << DiamondTrap::getName() << std::endl;
}

//Operateurs
DiamondTrap&	DiamondTrap::operator=(DiamondTrap const& rhs){
	setName(rhs.getName());
	setHitpoints(rhs.getHitpoints());
	setEnergy(rhs.getEnergy());
	setDamage(rhs.getDamage());
}

//Accesseurs

void	DiamondTrap::setName(std::string const name){
	this->_name = name;
}

std::string DiamondTrap::getName() const{
	return (this->_name);
}