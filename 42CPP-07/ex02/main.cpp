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
			int const valToPut = std::rand() % 256;
			tabVS[i] = valToPut;
			tab[i] = valToPut;
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
			float const valToPut = static_cast<float>(std::rand() / static_cast<float>(25600));
			tabVS[i] = valToPut;
			tab[i] = valToPut;
			std::cout << std::setw(11) << tabVS[i] << " | " << std::setw(11) << tab[i] << std::endl;
		}

		delete [] tabVS;
	}
	//Test exception OutOfTab
	try
	{
		std::cout << std::endl << "\033[34;1mException OutOfTab :\033[0m" << std::endl;
		Array<int> tab(5);

		for (int i = 0; i < 5; i++)
			tab[i] = 5;
		std::cout << "I try to print tab[4] : tab[4] = " << tab[4] << std::endl;
		std::cout << "I try to print tab[6] : tab[6] = " << tab[6] << std::endl;
	}
	catch (std::exception& error){
		std::cout << "[\033[31;1mERROR\033[0m] " << error.what() << std::endl;
	}

	//Main de test du sujet
	{
		std::cout << std::endl << "\033[34;1mSubject main :\033[0m" << std::endl;
		Array<int> numbers(750);
    	int* mirror = new int[750];

    	srand(time(NULL));
    	for (int i = 0; i < 750; i++)
    	{
    	    const int value = rand();
    	    numbers[i] = value;
    	    mirror[i] = value;
    	}

    	//SCOPE
    	{
    	    Array<int> tmp = numbers;
    	    Array<int> test(tmp);
    	}

    	for (int i = 0; i < 750; i++)
    	{
    	    if (mirror[i] != numbers[i])
    	    {
    	        std::cerr << "didn't save the same value!!" << std::endl;
    	        return 1;
    	    }
    	}
    	try
    	{
    	    numbers[-2] = 0;
    	}
    	catch(const std::exception& e)
    	{
    	    std::cerr << e.what() << '\n';
    	}
    	try
    	{
    	    numbers[750] = 0;
    	}
    	catch(const std::exception& e)
    	{
    	    std::cerr << e.what() << '\n';
    	}

    	for (int i = 0; i < 750; i++)
    	{
    	    numbers[i] = rand();
    	}
    	delete [] mirror;//
	}
	return (0);
}