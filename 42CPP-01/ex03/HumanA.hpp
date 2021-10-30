#ifndef HUMANA_H
#define HUMANA_H

#include "Western.hpp"

class HumanA {
	public:
		HumanA(std::string name_chosen, Weapon& weapon_chosen);
		~HumanA(void);

		void attack(void);

	private:
		std::string name;
		Weapon& weapon;
};

#endif
