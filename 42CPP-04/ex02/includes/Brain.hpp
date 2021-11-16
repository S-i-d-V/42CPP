#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "Animal.hpp"

class Brain{
	public:
		Brain();
		Brain(Brain const& src);
		~Brain();

		Brain& operator=(Brain const& rhs);

		std::string _ideas[100];
};

#endif