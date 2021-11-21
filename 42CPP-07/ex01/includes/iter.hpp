#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <iomanip>

template<typename TArray>
void	iter(TArray *array, int len, void(*func)(TArray&)){
	for (int i = 0; i < len; i++){
		func(array[i]);
	}
}

template<typename T>
void	displayValue(T& value){
	std::cout << value << std::endl;
}

template<typename T>
void	incrementValue(T& value){
	value = value + 1;
}

#endif