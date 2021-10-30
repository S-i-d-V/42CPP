#ifndef HUMANB_H
#define HUMANB_H

#include "Western.hpp"

class HumanB {
	public:
		HumanB(std::string name_chosen);
		~HumanB(void);

		void setWeapon(Weapon& weapon_chosen);
		void attack(void);

	private:
		std::string name;
		Weapon *weapon;
};

#endif
