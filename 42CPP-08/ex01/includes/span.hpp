#ifndef SPAN_HPP
#define SPAN_HPP

#include <iomanip>
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

class Span{
	public:
		Span();
		Span(unsigned int n);
		Span(Span const& src);
		~Span();

		Span& operator=(Span const& rhs);

		void addNumber(int newNumber);
		void addNumbers(std::vector<int>::iterator beg, std::vector<int>::iterator end);

		std::vector<int>	getVector() const;

		int	shortestSpan();
		int	longestSpan();

		class TooManyNumbersException : public std::exception{
			char const* what() const throw(){
				return ("You can't store more numbers !");
			}
		};

		class NotEnoughNumbersException : public std::exception{
			char const* what() const throw(){
				return ("Not enough numbers, no span possible !");
			}
		};


	private:
		std::vector<int>	_numbers;
		int					_nbNumbers;
};

#endif