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

		virtual void	setIdea(std::string idea) = 0;
		virtual std::string getIdea(int n) const = 0;

		virtual void	makeSound() const;

	protected:
		std::string _type;
};

#include "Cat.hpp"
#include "Dog.hpp"

#endif