#include "../includes/Cure.hpp"

//Constructeurs/Destructeurs
Cure::Cure(){
	_type = "ice";
	return;
}

Cure::Cure(Cure const& src){
	*this = src;
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
	AMateria* newCure = new Cure();
	return (newCure);
}

void		Cure::use(ICharacter& target) const{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}