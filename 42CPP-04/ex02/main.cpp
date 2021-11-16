#include "includes/Animal.hpp"
#include "includes/WrongAnimal.hpp"

int	main(){
	//Enlever le commentaire pour voir que l'on ne peut pas l'instancier
	//Animal* a = new Animal();
	std::cout << "\033[34;1mConstructeur Cat :\033[0m" << std::endl;
	Animal* a = new Cat();
	std::cout << "\033[34;1mConstructeur Dog :\033[0m" << std::endl;
	Animal* b = new Dog();

	std::cout << std::endl << "\033[34;1mFonctions makeSound (Animals):\033[0m" << std::endl;
	a->makeSound();
	b->makeSound();

	std::cout << "\033[34;1mDestructeur Cat :\033[0m" << std::endl;
	delete a;
	std::cout << "\033[34;1mDestructeur Dog :\033[0m" << std::endl;
	delete b;

	return (0);
}