#include "includes/Array.hpp"
#include <ctime>

int main(){
	//Int
	{
		unsigned int nbValue = 4;
		int			*tabVS = new int[nbValue];
		Array<int>	tab(nbValue);

		std::cout << "\033[34;1mInt & Array<int> tab (size() = " << tab.size() << ") with same random numbers :\033[0m" << std::endl;
		std::srand(time(NULL));
		std::cout << std::left << "\033[33m" << std::setw(11) << "tabVS[i]" << " | " << std::left << std::setw(11) << "tab[i]" << "\033[0m" << std::endl;
		for (unsigned int i = 0; i < nbValue; i++){
			tabVS[i] = std::rand() % 256;
			tab[i] = tabVS[i];
			std::cout << std::setw(11) << tabVS[i] << " | " << std::setw(11) << tab[i] << std::endl;
		}

		delete [] tabVS;
	}
	//Float
	{
		unsigned int 	nbValue = 3;
		float			*tabVS = new float[nbValue];
		Array<float>	tab(nbValue);

		std::cout << std::endl << "\033[34;1mFloat & Array<float> tab (size() = " << tab.size() << ") with same random numbers :\033[0m" << std::endl;
		std::srand(time(NULL));
		std::cout << std::left << "\033[33m" << std::setw(11) << "tabVS[i]" << " | " << std::left << std::setw(11) << "tab[i]" << "\033[0m" << std::endl;
		for (unsigned int i = 0; i < nbValue; i++){
			tabVS[i] = static_cast<float>(std::rand() / static_cast<float>(25600));
			tab[i] = tabVS[i];
			std::cout << std::setw(11) << tabVS[i] << " | " << std::setw(11) << tab[i] << std::endl;
		}

		delete [] tabVS;
	}
	//Double
	{
		unsigned int 	nbValue = 6;
		double			*tabVS = new double[nbValue];
		Array<double>	tab(nbValue);

		std::cout << std::endl << "\033[34;1mDouble & Array<double> tab (size() = " << tab.size() << ") with same random numbers :\033[0m" << std::endl;
		std::srand(time(NULL));
		std::cout << std::left << "\033[33m" << std::setw(11) << "tabVS[i]" << " | " << std::left << std::setw(11) << "tab[i]" << "\033[0m" << std::endl;
		for (unsigned int i = 0; i < nbValue; i++){
			tabVS[i] = static_cast<double>(std::rand() / static_cast<double>(76800));
			tab[i] = tabVS[i];
			std::cout << std::setw(11) << tabVS[i] << " | " << std::setw(11) << tab[i] << std::endl;
		}

		delete [] tabVS;
	}
	return (0);
}