#include "includes/span.hpp"
#include <ctime>

int		main(){
	//Tests basiques
	{
		try{
			Span				span(6);

			std::cout << std::endl << "\033[34;1mFilling a span(6) with random numbers via addNumber(int):\033[0m" << std::endl;
			std::srand(unsigned(std::time(NULL)));
			for (int i = 0; i < 6; i++){
				span.addNumber(std::rand() % 99);
				std::cout << span.getVector()[i] << std::endl;
			}

			std::cout << std::endl << "\033[33;1mLongest span :\033[0m " << std::endl;
			std::cout << "\033[33mLongest span :\033[0m " << span.longestSpan() << std::endl;

			std::cout << std::endl << "\033[33;1mShortest span :\033[0m " << std::endl;
			std::cout << "\033[33mShortest span :\033[0m " << span.shortestSpan() << std::endl;

			std::cout << std::endl << "\033[33;1mAdding a number to catch the exception :\033[0m " << std::endl;
			span.addNumber(99);
		}
		catch (std::exception& error){
			std::cout << "[\033[31;1mERROR\033[0m] " << error.what() << std::endl;
		}
	}
	//Exception si span est impossible
	{
		try{
			Span				span(1);

			std::cout << std::endl << "\033[34;1mTesting one more exceptions :\033[0m" << std::endl;
			std::cout << "\033[33;1mAdding only one number :\033[0m " << std::endl;
			span.addNumber(99);
			std::cout << *(span.getVector().begin()) << std::endl;

			std::cout << std::endl << "\033[33;1mCatching the NotEnoughNumbersException :\033[0m " << std::endl;
			span.shortestSpan();
		}
		catch (std::exception& error){
			std::cout << "[\033[31;1mERROR\033[0m] " << error.what() << std::endl;
		}
	}
	//Tests avec 10000 nombres
	{
		try{
			std::cout << std::endl << "\033[34;1mFilling a span(10000) with with a range of iterator:\033[0m" << std::endl;
			Span				span(10000);
			//Vecteur test afin d'utiliser ses iterateurs
			std::vector<int>	test(10000);
			std::srand(unsigned(std::time(NULL)));
			std::generate(test.begin(), test.end(), std::rand);
			std::sort(test.begin(), test.end());

			//Addings numbers with a range of iterators
			span.addNumbers(test.begin(), test.end());

			std::cout << "\033[33;1mLongest span :\033[0m " << std::endl;
			std::cout << "\033[33mMin :\033[0m " << *(test.begin()) << std::endl;
			std::cout << "\033[33mMax :\033[0m " << *(test.end() - 1) << std::endl;
			std::cout << *(test.end() - 1) << " - " << *(test.begin()) << " = ";
			std::cout << "\033[33mLongest span :\033[0m " << span.longestSpan() << std::endl;

			std::cout << std::endl << "\033[33;1mShortest span :\033[0m " << std::endl;
			std::cout << "\033[33mMin :\033[0m " << *(test.begin()) << std::endl;
			std::cout << "\033[33mMin + 1 :\033[0m " << *(test.begin() + 1) << std::endl;
			std::cout << "\033[33mMax :\033[0m " << *(test.end() - 1) << std::endl;
			std::cout << "\033[33mMax - 1 :\033[0m " << *(test.end() - 2) << std::endl;

			if (*(test.end() - 1) - *(test.end() - 2) < *(test.begin() + 1) - *(test.begin()))
				std::cout << *(test.end() - 1) << " - " << *(test.end() - 2) << " = ";
			else
				std::cout <<*(test.begin() + 1) << " - " << *(test.begin()) << " = ";
			std::cout << "\033[33mShortest span :\033[0m " << span.shortestSpan() << std::endl;
		}
		catch (std::exception& error){
			std::cout << "[ERROR] " << error.what() << std::endl;
		}
	}

	return (0);
}