#include "../includes/Character.hpp"

//Constructeurs/Destructeurs
Character::Character(){
	_name = "default";
	for (int i = 0; i < 4; i++)
		_inventory[i] = nullptr;
	return;
}

Character::Character(std::string name){
	_name = name;
	for (int i = 0; i < 4; i++)
		_inventory[i] = nullptr;
	return;
}

Character::Character(Character const& src){
	*this = src;
	return;
}

Character::~Character(){
	for (int i = 0; i < 4; i++){
		if (_inventory[i] != nullptr)
			delete _inventory[i];
	}
	return;
}

//Operateurs
Character& Character::operator=(Character const& rhs){
	_name = rhs._name;
	for (int i = 0; i < 4; i++){
		if (_inventory[i] != nullptr){
			delete _inventory[i];
			_inventory[i] = nullptr;
		}
		_inventory[i] = rhs._inventory[i]->clone();
	}
	return (*this);
}

//Fonctions membres
std::string const& Character::getName() const{
	return (_name);
}

void Character::equip(AMateria* m){
	if (!m)
		return;
	for (int i = 0; i < 4; i++){
		if (_inventory[i] == nullptr && _inventory[i] != m){
			_inventory[i] = m;
			return;
		}
	}
}

void Character::unequip(int idx){
	if (idx < 4 && idx >= 0){
			_inventory[idx] = nullptr;
	}
}

void Character::use(int idx, ICharacter& target){
	if ((idx > 3 || idx < 0) && _inventory[idx] == nullptr)
		return;
	_inventory[idx]->use(target);
}
