#include "../includes/WrongAnimal.hpp"

//Constructeur/Destructeur
WrongAnimal::WrongAnimal(){
	std::cout << "WrongAnimal's default constructor called" << std::endl;
	_type = "WrongAnimal";
	return;
}

WrongAnimal::WrongAnimal(WrongAnimal const& src){
	std::cout << "WrongAnimal's copy constructor called from " << src._type << std::endl;
	_type = src._type;
	return;
}

WrongAnimal::~WrongAnimal(){
	std::cout << _type << "'s (WrongAnimal) destructor called" << std::endl;
}

//Operateurs
WrongAnimal&	WrongAnimal::operator=(WrongAnimal const& rhs){
	_type = rhs._type;
	return (*this);
}

//Fonction membre
void	WrongAnimal::makeSound() const{
	std::cout << _type << " fais du bruit de WrongAnimal." << std::endl;
}
