#include "../includes/AMateria.hpp"

//Constructeurs/Destructeur
AMateria::AMateria(){
	_type = "default";
	return;
}

AMateria::AMateria(std::string const & type){
	_type = type;
	return;
}

AMateria::AMateria(AMateria const& src){
	*this = src;
	return;
}

AMateria::~AMateria(){
	return;
}

//Operateur
AMateria& AMateria::operator=(AMateria const& rhs){
	_type = rhs._type;
	return (*this);
}

//Fonction membre
std::string const& AMateria::getType() const{
	return(_type);
}
