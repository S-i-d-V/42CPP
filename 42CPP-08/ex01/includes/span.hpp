#ifndef SPAN_HPP
#define SPAN_HPP

class Span{
	public:
		Span();
		Span(unsigned int n);
		Span(Span const& src);
		~Span();

		Span& operator=(Span const& rhs);

		class TooManyNumbersException : public std::exception{
			char const* what() const throw(){
				return ("You can't store more numbers !");
			}
		}

		class NotEnoughNumbersException : public std::exception{
			char const* what() const throw(){
				return ("Not enough numbers, no span possible !");
			}
		}

	private:
		std::vector<int>	_numbers;
		int					_nbNumbers;
}

#endif