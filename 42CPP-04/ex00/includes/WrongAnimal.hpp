#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <iomanip>

class WrongAnimal{
	public:
		WrongAnimal();
		WrongAnimal(WrongAnimal const& src);
		virtual ~WrongAnimal();

		WrongAnimal& operator=(WrongAnimal const& rhs);

		void	makeSound() const;

	protected:
		std::string _type;
};

#include "WrongCat.hpp"

#endif