#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
#include <iomanip>
#include <cstring>

class Zombie {
	public:
		Zombie(void);
		~Zombie(void);

		void	announce(void);
		void	set_name(std::string name);

	private:
		std::string name;
};

Zombie* zombieHorde(int n, std::string name);

#endif
