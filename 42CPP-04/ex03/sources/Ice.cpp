#include "../includes/Ice.hpp"

//Constructeurs/Destructeurs
Ice::Ice(){
	_type = "ice";
	return;
}

Ice::Ice(Ice const& src){
	_type = src._type;
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
	AMateria* newIce = new Ice(*this);
	return (newIce);
}

void		Ice::use(ICharacter& target) const{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}