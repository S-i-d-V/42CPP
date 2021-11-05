#include "Animal.hpp"

//Constructeur/Destructeur
Cat::Cat(){
	std::cout << "Cat's default constructor called" << std::endl;
	_type = "Cat";
	return;
}

Cat::Cat(Cat const& src){
	std::cout << "Cat's copy constructor called from " << src._type << std::endl;
	_type = src._type;
	return;
}

Cat::~Cat(){
	std::cout << _type << "'s (Animal) destructor called" << std::endl;
}

//Operateurs
Cat&	Cat::operator=(Cat const& rhs){
	_type = rhs._type;
	return (*this);
}

//Fonction membre
void	Cat::makeSound(){
	std::cout << "MmeeewwWW..MmeeewwWW..." << std::endl;
}