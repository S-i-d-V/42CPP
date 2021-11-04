#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

//Constructeurs/Destructeurs
FragTrap::FragTrap(){
	std::cout << "FragTrap default constructor called" << std::endl;
	setName("Default");
	setHitpoints(100);
	setEnergy(100);
	setDamage(30);
	return;
}

FragTrap::FragTrap(FragTrap const &src){
	std::cout << "FragTrap copy constructor called from " << src.getName() << std::endl;
	*this = src;
}

FragTrap::FragTrap(std::string name){
	std::cout << "FragTrap constructor called for " << name << std::endl;
	setName(name);
	setHitpoints(100);
	setEnergy(100);
	setDamage(30);
	return;
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap destructor called for " << getName() << std::endl;
	return;
}

//Fonction membre
void	FragTrap::attack(std::string const& target){
	std::cout << getName() << " attack " << target << " with FragTrap weapon, causing " << getDamage() << " points of damage." << std::endl;
}

void	FragTrap::highFivesGuys(){
	std::cout << getName() << " said : 'Amazing guyz ! High five !'" << std::endl;
}

//Operateurs
FragTrap&	FragTrap::operator=(FragTrap const& rhs){
	setName(rhs.getName());
	setHitpoints(rhs.getHitpoints());
	setEnergy(rhs.getEnergy());
	setDamage(rhs.getDamage());
}
