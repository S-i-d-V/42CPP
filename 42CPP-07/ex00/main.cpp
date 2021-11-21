#include "includes/TFile.hpp"

int main(){
	//Int
	{
		int a = 42;
		int b = 0;

		std::cout << std::endl << "\033[34;1mInt :\033[0m" << std::endl;
		std::cout << "A   = " << std::left << std::setw(8) << a << " | B = " << std::left << std::setw(8) << b << std::endl;
		std::cout << "Min = " << min<int>(a, b) << std::endl;
		std::cout << "Max = " << max<int>(a, b) << std::endl;
		swap<int>(&a, &b);
		std::cout << "A   = " << std::setw(8) << a << " | B = " << std::setw(8) << b << " (After swap)" << std::endl;
	}

	//Float
	{
		float a = 42.786;
		float b = 1.24;

		std::cout << std::endl << "\033[34;1mFloat :\033[0m" << std::endl;
		std::cout << "A   = " << std::left << std::setw(8) << a << " | B = " << std::left << std::setw(8) << b << std::endl;
		std::cout << "Min = " << min<float>(a, b) << std::endl;
		std::cout << "Max = " << max<float>(a, b) << std::endl;
		swap<float>(&a, &b);
		std::cout << "A   = " << std::left << std::setw(8) << a << " | B = " << std::left << std::setw(8) << b << " (After swap)" << std::endl;
	}

	//Double
	{
		double a = 42.2;
		double b = 7.5;

		std::cout << std::endl << "\033[34;1mDouble :\033[0m" << std::endl;
		std::cout << "A   = " << std::left << std::setw(8) << a << " | B = " << std::left << std::setw(8) << b << std::endl;
		std::cout << "Min = " << min<double>(a, b) << std::endl;
		std::cout << "Max = " << max<double>(a, b) << std::endl;
		swap<double>(&a, &b);
		std::cout << "A   = " << std::left << std::setw(8) << a << " | B = " << std::left << std::setw(8) << b << " (After swap)" << std::endl;
	}
}