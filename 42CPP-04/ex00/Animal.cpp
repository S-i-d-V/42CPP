#include "Animal.hpp"

//Constructeur/Destructeur
Animal::Animal(){
	std::cout << "Animal's default constructor called" << std::endl;
	_type = "Animal";
	return;
}

Animal::Animal(Animal const& src){
	std::cout << "Animal's copy constructor called from " << src._type << std::endl;
	_type = src._type;
	return;
}

Animal::~Animal(){
	std::cout << _type << "'s (Animal) destructor called" << std::endl;
}

//Operateurs
Animal&	Animal::operator=(Animal const& rhs){
	_type = rhs._type;
	return (*this);
}

//Fonction membre
void	Animal::makeSound(){
	std::cout << _type << " fais du bruit." << std::endl;
}
