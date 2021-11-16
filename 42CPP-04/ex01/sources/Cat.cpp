#include "../includes/Animal.hpp"
#include "../includes/Brain.hpp"

//Constructeur/Destructeur
Cat::Cat(){
	std::cout << "Cat's default constructor called" << std::endl;
	_type = "Cat";
	_brain = new Brain();
	return;
}

Cat::Cat(Cat const& src){
	std::cout << "Cat's copy constructor called from " << src._type << std::endl;
	_brain = new Brain();
	*this = src;
	return;
}

Cat::~Cat(){
	std::cout << _type << "'s (Animal) destructor called" << std::endl;
	delete _brain;
}

//Operateurs
Cat&	Cat::operator=(Cat const& rhs){
	_type = rhs._type;
	for (int i = 0; i < 100; i++)
		_brain->_ideas[i] = rhs._brain->_ideas[i];
	return (*this);
}

//Accesseurs
void	Cat::setIdea(std::string idea){
	for (int i = 0; i < 100; i++){
		if (_brain->_ideas[i] == ""){
			_brain->_ideas[i] = idea;
			break;
		}
	}
}

std::string Cat::getIdea(int n) const{
	return (_brain->_ideas[n]);
}


//Fonction membre
void	Cat::makeSound() const{
	std::cout << "MmeeewwWW..MmeeewwWW..." << std::endl;
}