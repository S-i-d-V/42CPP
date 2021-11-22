#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <list>

class NotFound : public std::exception{
	char const* what() const throw(){
		return ("Element not found !");
	}
};

template<typename T>
int	easyFind(T const& container, int toFind){
	if (std::find(container.begin(), container.end(), toFind) != container.end())
		return (toFind);
	throw NotFound();
}

#endif