#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <iomanip>

class ClapTrap{
	public:
		ClapTrap();
		ClapTrap(ClapTrap const& src);
		ClapTrap(std::string name);
		~ClapTrap();

		void		attack(std::string const& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);

		ClapTrap&	operator=(ClapTrap const& rhs);
		
		std::string getName()		const;
		int 		getHitpoints()	const;
		int 		getEnergy()		const;
		int 		getDamage()		const;

	private:
		std::string _name;
		int			_hitpoints;
		int			_energy;
		int			_damage;
};

#endif