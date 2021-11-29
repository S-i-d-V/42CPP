#include "../includes/MutantStack.hpp"

template<typename T>
MutantStack<T>::MutantStack(): std::stack<T>(){
	return;
}

template<typename T>
MutantStack<T>::MutantStack(MutantStack const& src): std::stack<T>(src){
	*this = src;
	return;
}

template<typename T>
MutantStack<T>::~MutantStack(){
}

template<typename T>
MutantStack<T>& MutantStack<T>::operator=(MutantStack const& rhs){
	std::stack<T>::operator=(rhs);
	return (*this);
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin(void){
	return (this->c.begin());
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end(void){
	return (this->c.end());
}
