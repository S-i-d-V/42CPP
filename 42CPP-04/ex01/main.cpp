#include "includes/Animal.hpp"
#include "includes/WrongAnimal.hpp"

int	main(){
	std::cout << "\033[34;1mConstructeur Animal :\033[0m" << std::endl;
	Animal* Zoo[6];

	for (int i = 0; i < 3; i++)
		Zoo[i] = new Cat();
	for (int i = 3; i < 6; i++)
		Zoo[i] = new Dog();


	std::cout << std::endl << "\033[34;1mFonctions makeSound (Cat):\033[0m" << std::endl;
	for (int i = 0; i < 3; i++)
		Zoo[i]->makeSound();
	std::cout << "\033[34;1mFonctions makeSound (Dog):\033[0m" << std::endl;
	for (int i = 3; i < 6; i++)
		Zoo[i]->makeSound();

	std::cout << std::endl << "\033[34;1mVerification de la deep copy:\033[0m" << std::endl;{
		//Original pense a une idee
		Cat original;
		original.setIdea("Ceci est ma super idee !");
		//Copy la recopie
		Cat copyCat(original);
		//Original a une nouvelle idee
		original.setIdea("J'ai une nouvelle idee !");
		//J'imprime leurs idees :
		std::cout << std::endl << "\033[34;1mOriginal :\033[0m" << std::endl;
		std::cout << "idea[0] : " << original.getIdea(0) << std::endl;
		std::cout << "idea[1] : " << original.getIdea(1) << std::endl;
		std::cout << "\033[34;1mCopy :\033[0m" << std::endl;
		std::cout << "idea[0] : " << copyCat.getIdea(0) << std::endl;
		std::cout << "idea[1] : " << copyCat.getIdea(1) << std::endl << std::endl;
		
		std::cout << std::endl << "\033[34;1mDestructeurs copy :\033[0m" << std::endl;
	}

	std::cout << std::endl << "\033[34;1mDestructeurs :\033[0m" << std::endl;
	for (int i = 0; i < 6; i++)
		delete Zoo[i];
	return (0);
}