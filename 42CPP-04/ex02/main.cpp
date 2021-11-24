#include "includes/Animal.hpp"
#include "includes/WrongAnimal.hpp"

int	main(){
	std::cout << "\033[34;1mConstructeur Cat :\033[0m" << std::endl;
	Animal* a = new Cat();
	std::cout << "\033[34;1mConstructeur Dog :\033[0m" << std::endl;
	Animal* b = new Dog();
	//Enlever le commentaire pour voir que l'on ne peut pas l'instancier
	//Animal* c = new Animal();

	std::cout << std::endl << "\033[34;1mFonctions makeSound (Animals):\033[0m" << std::endl;
	a->makeSound();
	b->makeSound();

	std::cout << std::endl << "\033[34;1mVerification de la deep copy:\033[0m" << std::endl;{
		//Original pense a une idee
		std::cout << "\033[33;1mConstruction de originalCat :\033[0m" << std::endl;
		Cat original;
		std::cout << "\033[33;1mOriginalCat a une idee :\033[0m" << std::endl;
		original.setIdea("Ceci est ma super idee !");
		std::cout << "idea[0] : " << original.getIdea(0) << std::endl;

		//Copy la recopie
		std::cout << std::endl << "\033[33;1mConstruction par copie de copyCat :\033[0m" << std::endl;
		Cat copyCat(original);
		std::cout << "idea[0] : " << copyCat.getIdea(0) << std::endl;

		//Original a une nouvelle idee
		std::cout << std::endl << "\033[33;1mOriginalCat a une nouvelle idee :\033[0m" << std::endl;
		original.setIdea("J'ai une nouvelle idee !");
		std::cout << "idea[0] : " << original.getIdea(0) << std::endl;
		std::cout << "idea[1] : " << original.getIdea(1) << std::endl;


		std::cout << std::endl << "\033[33;1mCopyCat ne l'a pas :\033[0m" << std::endl;
		std::cout << "idea[0] : " << copyCat.getIdea(0) << std::endl;
		std::cout << "idea[1] : " << copyCat.getIdea(1) << std::endl << std::endl;
		
		std::cout << std::endl << "\033[33;1mDestructeurs scope DeepCopy :\033[0m" << std::endl;
	}

	std::cout << "\033[34;1mDestructeur Cat :\033[0m" << std::endl;
	delete a;
	std::cout << "\033[34;1mDestructeur Dog :\033[0m" << std::endl;
	delete b;

	return (0);
}