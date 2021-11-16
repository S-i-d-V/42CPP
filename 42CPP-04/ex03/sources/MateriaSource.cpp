#include "../includes/MateriaSource.hpp"

//Constructeurs/Destructeurs
MateriaSource::MateriaSource(){
	for (int i = 0; i < 4; i++)
		_knowledge[i] = nullptr;
	return;
}

MateriaSource::MateriaSource(MateriaSource const& src){
	*this = src;
	return;
}

MateriaSource::~MateriaSource(){
	return;
}

//Operateurs
MateriaSource& MateriaSource::operator=(MateriaSource const& rhs){
	for (int i = 0; i < 4; i++)
		_knowledge[i] = rhs._knowledge[i];
	return (*this);
}

//Fonction membres
void MateriaSource::learnMateria(AMateria* m){
	if (!m)
		return;
	for (int i = 0; i < 4; i++){
		if (_knowledge[i] == nullptr)
			_knowledge[i] = m->clone();
	}
}
AMateria* MateriaSource::createMateria(std::string const & type){
	AMateria* newMateria = 0;

	for (int i = 0; i < 4; i++){
		if (_knowledge[i]->getType() == type)
			newMateria = _knowledge[i];
		else if (_knowledge[i] == nullptr)
			break;
	}
	return (newMateria);
}
