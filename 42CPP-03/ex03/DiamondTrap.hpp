#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP
#include "ClapTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap{
	public:
		DiamondTrap();
		DiamondTrap(DiamondTrap const& src);
		DiamondTrap(std::string name);
		~DiamondTrap();

		DiamondTrap& 	operator=(DiamondTrap const& rhs);

		void			setName(std::string const name);
		std::string 	getName() const;

		void	attack(std::string const& target);
		void	whoAmI();

	private:
		std::string _name;
};

#endif