#include "includes/Data.hpp"

uintptr_t serialize(Data* ptr){
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserealize(uintptr_t raw){
	return (reinterpret_cast<Data*>(raw));
}

int main(){
	Data *toSerealize = new Data;
	
	std::cout << "\033[34;1mOriginals data :\033[0m" << std::endl;
	std::cout << toSerealize << std::endl;
	std::cout << toSerealize->_firstData << std::endl;
	std::cout << toSerealize->_secondData << std::endl;
	std::cout << toSerealize->_differentData << std::endl;
	uintptr_t ptrSerealized = serialize(toSerealize);

	Data *deserealized = new Data;
	deserealized = deserealize(ptrSerealized);

	std::cout << "\033[34;1mSerialized then deserealized data :\033[0m" << std::endl;
	std::cout << deserealized << std::endl;
	std::cout << deserealized->_firstData << std::endl;
	std::cout << deserealized->_secondData << std::endl;
	std::cout << deserealized->_differentData << std::endl;

}