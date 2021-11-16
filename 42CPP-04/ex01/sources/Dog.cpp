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
	_brain = new Brain();
	*this = src;
	return;
}

Dog::~Dog(){
	std::cout << _type << "'s (Animal) destructor called" << std::endl;
	delete _brain;
}

//Operateurs
Dog&	Dog::operator=(Dog const& rhs){
	_type = rhs._type;
	for (int i = 0; i < 100; i++)
		_brain->_ideas[i] = rhs._brain->_ideas[i];
	return (*this);
}

//Accesseurs
void	Dog::setIdea(std::string idea){
	for (int i = 0; i < 100; i++){
		if (_brain->_ideas[i] == ""){
			_brain->_ideas[i] = idea;
			break;
		}
	}
}

std::string Dog::getIdea(int n) const{
	return (_brain->_ideas[n]);
}

//Fonction membre
void	Dog::makeSound() const{
	std::cout << "WwooaaAAFFF ! WwooaaAAFFF !" << std::endl;
}
