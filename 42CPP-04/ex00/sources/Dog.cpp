#include "../includes/Animal.hpp"

//Constructeur/Destructeur
Dog::Dog(){
	std::cout << "Dog's default constructor called" << std::endl;
	_type = "Dog";
	return;
}

Dog::Dog(Dog const& src){
	std::cout << "Dog's copy constructor called from " << src._type << std::endl;
	_type = src._type;
	return;
}

Dog::~Dog(){
	std::cout << _type << "'s (Animal) destructor called" << std::endl;
}

//Operateurs
Dog&	Dog::operator=(Dog const& rhs){
	_type = rhs._type;
	return (*this);
}

//Fonction membre
void	Dog::makeSound(){
	std::cout << "WwooaaAAFFF ! WwooaaAAFFF !" << std::endl;
}
