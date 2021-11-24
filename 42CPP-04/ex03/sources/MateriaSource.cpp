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
	for (int i = 0; i < 4; i++){
		//if (_knowledge[i] != nullptr)
			delete _knowledge[i];
	}
	return;
}

//Operateurs
MateriaSource& MateriaSource::operator=(MateriaSource const& rhs){
	for (int i = 0; i < 4; i++){
		if (_knowledge[i] != nullptr){
			delete _knowledge[i];
			_knowledge[i] = nullptr;
		}
		_knowledge[i] = rhs._knowledge[i]->clone();
	}
	return (*this);
}

//Fonction membres
void MateriaSource::learnMateria(AMateria* m){
	if (!m)
		return;
	for (int i = 0; i < 4; i++){
		if (_knowledge[i] == nullptr){
			_knowledge[i] = m;
			return;
		}
	}
	delete m;
}
AMateria* MateriaSource::createMateria(std::string const & type){
	for (int i = 0; i < 4; i++){
		if (_knowledge[i] != nullptr && _knowledge[i]->getType() == type){
			return(_knowledge[i]->clone());
		}
	}
	return (nullptr);
}
