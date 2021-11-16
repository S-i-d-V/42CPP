#include "../includes/Animal.hpp"

//Constructeurs / Destructeur
Brain::Brain(){
	std::cout << "Brain's default constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = "";
	return;
}

Brain::Brain(Brain const& src){
	*this = src;
	std::cout << "Brain's copy constructor called" << std::endl;
}

Brain::~Brain(){
	std::cout << "Brain's destructor called" << std::endl;
	return;
}

//Operateur
Brain& Brain::operator=(Brain const& rhs){
	for (int i = 0; i < 100; i++)
		_ideas[i] = rhs._ideas[i];
	return (*this);
}