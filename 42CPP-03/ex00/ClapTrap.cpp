#include "ClapTrap.hpp"

//Constructeurs/Destructeurs
ClapTrap::ClapTrap(){
	std::cout << "ClapTrap default constructor called" << std::endl;
	setName("Default");
	setHitpoints(10);
	setEnergy(10);
	setDamage(0);
	return;
}

ClapTrap::ClapTrap(ClapTrap const &src){
	std::cout << "Claptrap copy constructor called from " << src.getName() << std::endl;
	*this = src;
}


ClapTrap::ClapTrap(std::string const name){
	std::cout << "ClapTrap constructor called from " << name << std::endl;
	setName(name);
	setHitpoints(10);
	setEnergy(10);
	setDamage(0);
	return;
}

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap destructor called for " << getName() << std::endl;
	return;
}

//Member functions
void	ClapTrap::attack(std::string const& target){
	std::cout << getName() << " attack " << target << ", causing " << getDamage() << " points of damage." << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount){
	std::cout << getName() << " loose " << amount << " hitpoints." << std::endl;
	setHitpoints(getHitpoints() - amount);
}

void	ClapTrap::beRepaired(unsigned int amount){
	std::cout << getName() << " recover " << amount << " hitpoints." << std::endl;
	setHitpoints(getHitpoints() + amount);
}

//Operateurs
ClapTrap&	ClapTrap::operator=(ClapTrap const& rhs){
	std::cout << "Assignement operator called from " << rhs.getName() << std::endl;
	setName(rhs.getName());
	setHitpoints(rhs.getHitpoints());
	setEnergy(rhs.getEnergy());
	setDamage(rhs.getDamage());
	return (*this);
}

//Accesseurs
void		ClapTrap::setName(std::string name){
	this->_name = name;
}

void 		ClapTrap::setHitpoints(int const hitpoints){
	this->_hitpoints = hitpoints;
}

void 		ClapTrap::setEnergy(int const energy){
	this->_energy = energy;
}

void 		ClapTrap::setDamage(int const damage){
	this->_damage = damage;
}

std::string ClapTrap::getName()		const{
	return (this->_name);
}

int 		ClapTrap::getHitpoints()	const{
	return (this->_hitpoints);
}

int 		ClapTrap::getEnergy()		const{
	return (this->_energy);
}

int 		ClapTrap::getDamage()		const{
	return (this->_damage);
}
