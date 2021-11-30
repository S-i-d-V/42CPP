#include "includes/TFile.hpp"

int main(){
	//Int
	{
		int a = 42;
		int b = 0;

		std::cout << "\033[34;1mInt :\033[0m" << std::endl;
		std::cout << "\033[33mA et B avant swap :\033[0m" << std::endl;
		std::cout << "A   = " << std::left << std::setw(8) << a << " | B = " << std::left << std::setw(8) << b << std::endl;
		std::cout << "\033[33mMin / Max entre A et B :\033[0m" << std::endl;
		std::cout << "Min = " << std::left << std::setw(8) << min<int>(a, b) << " | Max = " << std::left << std::setw(8) << max<int>(a, b) << std::endl;
		std::cout << "\033[33mA et B avant swap :\033[0m" << std::endl;
		::swap(a, b);
		std::cout << "A   = " << std::setw(8) << a << " | B = " << std::setw(8) << b << " \033[34;1m(After swap)\033[0m" << std::endl;
	}

	//Float
	{
		float a = 42.786;
		float b = -1.24;

		std::cout << std::endl << "\033[34;1mFloat :\033[0m" << std::endl;
		std::cout << "\033[33mA et B avant swap :\033[0m" << std::endl;
		std::cout << "A   = " << std::left << std::setw(8) << a << " | B = " << std::left << std::setw(8) << b << std::endl;
		std::cout << "\033[33mMin / Max entre A et B :\033[0m" << std::endl;
		std::cout << "Min = " << std::left << std::setw(8) << min<float>(a, b) << " | Max = " << std::left << std::setw(8) << max<float>(a, b) << std::endl;
		std::cout << "\033[33mA et B avant swap :\033[0m" << std::endl;
		::swap(a, b);
		std::cout << "A   = " << std::setw(8) << a << " | B = " << std::setw(8) << b << " \033[34;1m(After swap)\033[0m" << std::endl;
	}

	//String
	//{
	//	std::string a = "Premier test";
	//	std::string b = "Second test plus long";
//
	//	std::cout << std::endl << "\033[34;1mDouble :\033[0m" << std::endl;
	//	std::cout << "\033[33mA et B avant swap :\033[0m" << std::endl;
	//	std::cout << "A   = " << std::left << std::setw(32) << a << " | B = " << std::left << std::setw(32) << b << std::endl;
	//	std::cout << "\033[33mMin / Max entre A et B :\033[0m" << std::endl;
	//	std::cout << "Min = " << std::left << std::setw(32) << min<std::string>(a, b) << " | Max = " << std::left << std::setw(32) << max<std::string>(a, b) << std::endl;
	//	std::cout << "\033[33mA et B avant swap :\033[0m" << std::endl;
	//	swap<std::string>(a, b);
	//	std::cout << "A   = " << std::setw(32) << a << " | B = " << std::setw(32) << b << " \033[34;1m(After swap)\033[0m" << std::endl;
	//}
}