#include "../includes/WrongAnimal.hpp"

//Constructeur/Destructeur
WrongCat::WrongCat(){
	std::cout << "WrongCat's default constructor called" << std::endl;
	_type = "WrongCat";
	return;
}

WrongCat::WrongCat(WrongCat const& src){
	std::cout << "WrongCat's copy constructor called from " << src._type << std::endl;
	_type = src._type;
	return;
}

WrongCat::~WrongCat(){
	std::cout << _type << "'s (WrongAnimal) destructor called" << std::endl;
}

//Operateurs
WrongCat&	WrongCat::operator=(WrongCat const& rhs){
	_type = rhs._type;
	return (*this);
}

//Fonction membre
void	WrongCat::makeSound() const{
	std::cout << "Mmew.. I'm a WrongCat !" << std::endl;
}