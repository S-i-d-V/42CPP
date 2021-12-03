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
		_numbers.clear();
	}
	if (rhs._nbNumbers > 0){
		_nbNumbers = rhs._nbNumbers;
		for (int i = 0; i < _nbNumbers; i++)
			_numbers.push_back(rhs._numbers[i]);
	}
	return (*this);
}

void	Span::addNumber(int newNumber){
	if (static_cast<int>(_numbers.size()) >= _nbNumbers)
		throw TooManyNumbersException();
	_numbers.push_back(newNumber);
}

void	Span::addNumbers(std::vector<int>::iterator beg, std::vector<int>::iterator end){
	while (beg != end){
		if (static_cast<int>(_numbers.size()) >= _nbNumbers)
			throw TooManyNumbersException();
		_numbers.push_back(*beg);
		beg++;
	}
}

std::vector<int>	Span::getVector() const{
	return (_numbers);
}

int	Span::shortestSpan(){
	if (_nbNumbers <= 1)
		throw NotEnoughNumbersException();
	std::vector<int> tmp(_numbers);
	std::sort(tmp.begin(), tmp.end());
	unsigned long i = 0;
	unsigned long j = 0;
	int shortest = -1;
	while (i < tmp.size() - 1){
		j = i + 1;
		while (j < tmp.size()){
			if (shortest == -1)
				shortest = tmp[j] - tmp[i];
			else if ((tmp[j] - tmp[i] >= 0) && ((tmp[j] - tmp[i]) < shortest)){
				shortest = tmp[j] - tmp[i];
			}
			j++;
		}
		i++;
	}
	return (shortest);
}

int	Span::longestSpan(){
	if (_nbNumbers <= 1)
		throw NotEnoughNumbersException();
	return (*(std::max_element(_numbers.begin(), _numbers.end())) - *(std::min_element(_numbers.begin(), _numbers.end())));
}
