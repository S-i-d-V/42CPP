#include "../includes/Cure.hpp"

//Constructeurs/Destructeurs
Cure::Cure(){
	_type = "cure";
	return;
}

Cure::Cure(Cure const& src){
	_type = src._type;
	return;
}

Cure::~Cure(){
	return;
}

//Operateurs
Cure&		Cure::operator=(Cure const& rhs){
	_type = rhs._type;
	return (*this);
}

//Fonction membre
AMateria*	Cure::clone() const{
	AMateria* newCure = new Cure(*this);
	return (newCure);
}

void		Cure::use(ICharacter& target) const{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}