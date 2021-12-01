#include "includes/iter.hpp"

int	main(){
//Int
	{
		int array[6] = {2, 67, 42, 12, 65, 34};

		std::cout << "\033[34;1mInt array :\033[0m" << std::endl;
		std::cout << "\033[33mdisplayValue() :\033[0m" << std::endl;
		iter<int>(array, 6, displayValue);

		std::cout << std::endl << "\033[33mdisplayValue() apres incrementValue() :\033[0m" << std::endl;
		iter<int>(array, 6, incrementValue);
		iter<int>(array, 6, displayValue);
	}

	//Float
	{
		float array[6] = {6.2353, 2.54, 0.7, .0544, 54.54, 23.5};

		std::cout << std::endl << "\033[34;1mFloat array :\033[0m" << std::endl;
		std::cout << "\033[33mdisplayValue() :\033[0m" << std::endl;
		iter<float>(array, 6, displayValue);

		std::cout << std::endl << "\033[33mdisplayValue() apres incrementValue() :\033[0m" << std::endl;
		iter<float>(array, 6, incrementValue);
		iter<float>(array, 6, displayValue);
	}

	//Char
	{
		char array[6] = "abcde";

		std::cout << std::endl << "\033[34;1mChar array :\033[0m" << std::endl;
		std::cout << "\033[33mdisplayValue() :\033[0m" << std::endl;
		iter<char>(array, 6, displayValue);

		std::cout << std::endl << "\033[33mdisplayValue() apres incrementValue() :\033[0m" << std::endl;
		iter<char>(array, 6, incrementValue);
		iter<char>(array, 6, displayValue);
	}
}