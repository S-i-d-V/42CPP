#ifndef WEAPON_H
#define WEAPON_H

#include "Western.hpp"

class Weapon{
	public:
		Weapon(std::string weapon);
		~Weapon(void);

		void	setType(std::string type);
		std::string&	getType(void);

	private:
		std::string type;
};

#endif
