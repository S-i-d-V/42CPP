#include "../includes/Data.hpp"

//Constructeurs
Data::Data(){
	_firstData = 42;
	_secondData = 99.67;
	_differentData = "Another type of data";
	return;
}

Data::Data(Data const& src){
	*this = src;
	return;
}

//Destructeur
Data::~Data(){
	return;
}

//Operateur
Data& Data::operator=(Data const& rhs){
	_firstData = rhs._firstData;
	_secondData = rhs._secondData;
	_differentData = rhs._differentData;
	return (*this);
}
