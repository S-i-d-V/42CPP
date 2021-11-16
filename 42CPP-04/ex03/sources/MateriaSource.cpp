#include "../includes/MateriaSource.hpp"

//Constructeurs/Destructeurs
MateriaSource::MateriaSource(){
	for (int i = 0; i < 4; i++)
		_knowledge[i] = nullptr;
	return;
}

MateriaSource::MateriaSource(MateriaSource const& src){
	for (int i = 0; i < 4; i++)
		_knowledge[i] = src._knowledge[i];
	return;
}

MateriaSource::~MateriaSource(){
	for (int i = 0; i < 4; i++){
		//if (_knowledge[i] != nullptr)
			delete _knowledge[i];
	}
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
		if (_knowledge[i] == nullptr){
			_knowledge[i] = m;
			break;
		}
	}
}
AMateria* MateriaSource::createMateria(std::string const & type){
	AMateria* newMateria = nullptr;

	for (int i = 0; i < 4; i++){
		if (_knowledge[i]->getType() == type){
			newMateria = _knowledge[i]->clone();
			break;
		}
	}
	return (newMateria);
}
