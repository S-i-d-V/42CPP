#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class DiamondTrap;

class ScavTrap : public virtual ClapTrap{
	public:
		ScavTrap();
		ScavTrap(ScavTrap const& src);
		ScavTrap(std::string name);
		~ScavTrap();

		ScavTrap& operator=(ScavTrap const& rhs);

		void	attack(std::string const& target);
		void	guardGate();
};

#endif