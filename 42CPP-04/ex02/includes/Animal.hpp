#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <iomanip>

class Animal{
	public:
		Animal();
		Animal(Animal const& src);
		virtual ~Animal();

		Animal& operator=(Animal const& rhs);

		virtual void	makeSound() const = 0;

	protected:
		std::string _type;
};

#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

#endif