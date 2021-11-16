#include "../includes/Ice.hpp"

//Constructeurs/Destructeurs
Ice::Ice(){
	_type = "cure";
	return;
}

Ice::Ice(Ice const& src){
	*this = src;
	return;
}

Ice::~Ice(){
	return;
}

//Operateurs
Ice& Ice::operator=(Ice const& rhs){
	return (*this);
	_type = rhs._type;
}

//Fonction membre
AMateria*	Ice::clone() const{
	AMateria* newIce = new Ice();
	return (newIce);
}

void		Ice::use(ICharacter& target) const{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}