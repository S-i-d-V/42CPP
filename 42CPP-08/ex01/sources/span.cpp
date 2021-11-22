#include "../includes/span.hpp"

Span::Span(){
	_nbNumbers = 25;
	return;
}

Span::Span(unsigned int n){
	_nbNumbers = n;
	return;
}

Span::Span(Span const& src){
	*this = src;
	return;
}

Span::~Span(){
	return;
}

Span& Span::operator=(Span const& rhs){
	if (_nbNumbers > 0){
		_nbNumbers = 0;
		_numbers.clear()
	}
	if (rhs._nbNumbers > 0){
		_nbNumbers = rhs._nbNumbers;
		for (int i = 0; i < _nbNumbers; i++)
			_numbers.push_back(rhs._numbers.at(i));
	}
	return (*this);
}
