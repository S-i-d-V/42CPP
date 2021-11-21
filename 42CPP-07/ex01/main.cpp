#include "includes/iter.hpp"

int	main(){
//Int
	{
		int array[6] = {2, 67, 42, 12, 65, 34};

		std::cout << "\033[34;1mInt :\033[0m" << std::endl;
		std::cout << "\033[33mdisplayValue() :\033[0m" << std::endl;
		iter<int>(array, 6, displayValue);

		std::cout << std::endl << "\033[33mdisplayValue() apres incrementValue() :\033[0m" << std::endl;
		iter<int>(array, 6, incrementValue);
		iter<int>(array, 6, displayValue);
	}

	//Float
	{
		float array[6] = {6.2353, 2.54, 0.7, .0544, 54.54, 23.5};

		std::cout << std::endl << "\033[34;1mInt :\033[0m" << std::endl;
		std::cout << "\033[33mdisplayValue() :\033[0m" << std::endl;
		iter<float>(array, 6, displayValue);

		std::cout << std::endl << "\033[33mdisplayValue() apres incrementValue() :\033[0m" << std::endl;
		iter<float>(array, 6, incrementValue);
		iter<float>(array, 6, displayValue);
	}

	//Double
	{
		double array[6] = {9.1, 2.00, 0.1, 4.5, 12.25, 42.9};

		std::cout << std::endl << "\033[34;1mInt :\033[0m" << std::endl;
		std::cout << "\033[33mdisplayValue() :\033[0m" << std::endl;
		iter<double>(array, 6, displayValue);

		std::cout << std::endl << "\033[33mdisplayValue() apres incrementValue() :\033[0m" << std::endl;
		iter<double>(array, 6, incrementValue);
		iter<double>(array, 6, displayValue);
	}
}