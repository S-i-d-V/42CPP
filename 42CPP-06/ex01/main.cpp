#include "includes/Data.hpp"

uintptr_t serialize(Data* ptr){
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserealize(uintptr_t raw){
	return (reinterpret_cast<Data*>(raw));
}

int main(){
	Data *original = new Data;
	
	std::cout << "\033[34;1mOriginals data :\033[0m" << std::endl;
	std::cout << "\033[33mAddress : \033[0m" << original << std::endl;
	std::cout << "\033[33m_firstData = \033[0m" << original->_firstData << std::endl;
	std::cout << "\033[33m_firstData = \033[0m" << original->_secondData << std::endl;
	std::cout << "\033[33m_firstData = \033[0m" << original->_differentData << std::endl;
	uintptr_t ptrSerealized = serialize(original);

	Data *deserealized = 0;
	deserealized = deserealize(ptrSerealized);

	std::cout << std::endl << "\033[34;1mSerialized then deserealized data :\033[0m" << std::endl;
	std::cout << "\033[33mAddress : \033[0m" << deserealized << std::endl;
	std::cout << "\033[33m_firstData = \033[0m" << deserealized->_firstData << std::endl;
	std::cout << "\033[33m_firstData = \033[0m" << deserealized->_secondData << std::endl;
	std::cout << "\033[33m_firstData = \033[0m" << deserealized->_differentData << std::endl;

	delete deserealized;
}