#include "../includes/Animal.hpp"
#include "../includes/Brain.hpp"

//Constructeur/Destructeur
Dog::Dog(){
	std::cout << "Dog's default constructor called" << std::endl;
	_type = "Dog";
	_brain = new Brain();
	return;
}

Dog::Dog(Dog const& src){
	std::cout << "Dog's copy constructor called from " << src._type << std::endl;
	_type = src._type;
	return;
}

Dog::~Dog(){
	std::cout << _type << "'s (Animal) destructor called" << std::endl;
	delete _brain;
}

//Operateurs
Dog&	Dog::operator=(Dog const& rhs){
	_type = rhs._type;
	return (*this);
}

//Fonction membre
void	Dog::makeSound() const{
	std::cout << "WwooaaAAFFF ! WwooaaAAFFF !" << std::endl;
}
