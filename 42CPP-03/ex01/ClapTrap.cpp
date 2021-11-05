#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

//Constructeurs/Destructeurs
ClapTrap::ClapTrap(){
	std::cout << "ClapTrap default constructor called" << std::endl;
	_name = "Default";
	_hitpoints = 10;
	_energy = 10;
	_damage = 0;
	return;
}

ClapTrap::ClapTrap(ClapTrap const &src){
	std::cout << "ClapTrap copy constructor called from " << src.getName() << std::endl;
	*this = src;
	return;
}


ClapTrap::ClapTrap(std::string const name){
	std::cout << "ClapTrap constructor called for " << name << std::endl;
	_name = name;
	_hitpoints = 10;
	_energy = 10;
	_damage = 0;
	return;
}

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap destructor called for " << _name << std::endl;
	return;
}

//Member functions
void	ClapTrap::attack(std::string const& target){
	std::cout << _name << " attack " << target << ", causing " << _damage << " points of damage." << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount){
	std::cout << _name << " loose " << amount << " hitpoints, and now have ";
	_hitpoints -= amount;
	std::cout << _hitpoints << "." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount){
	std::cout << _name << " recover " << amount << " hitpoints, and now have ";
	_hitpoints += amount;
	std::cout << _hitpoints << "." << std::endl;
}

//Operateurs
ClapTrap&	ClapTrap::operator=(ClapTrap const& rhs){
	std::cout << "Assignement operator called from " << rhs._name << std::endl;
	_name = rhs._name;
	_hitpoints = rhs._hitpoints;
	_energy = rhs._energy;
	_damage = rhs._damage;
	return (*this);
}

//Accesseurs
std::string ClapTrap::getName()		const{
	return (_name);
}

int 		ClapTrap::getHitpoints()	const{
	return (_hitpoints);
}

int 		ClapTrap::getEnergy()		const{
	return (_energy);
}

int 		ClapTrap::getDamage()		const{
	return (_damage);
}
