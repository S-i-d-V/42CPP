#include "includes/Animal.hpp"

int	main(){
	std::cout << "\033[34;1mConstructeur animal :\033[0m" << std::endl;
	Animal* a = new Animal();
	std::cout << "\033[34;1mConstructeur Cat :\033[0m" << std::endl;
	Animal* b = new Cat();
	std::cout << "\033[34;1mConstructeur Dog :\033[0m" << std::endl;
	Animal* c = new Dog();

	std::cout << std::endl << "\033[34;1mFonctions makeSound :\033[0m" << std::endl;
	a->makeSound();
	b->makeSound();
	c->makeSound();

	std::cout << std::endl << "\033[34;1mDestructeur Dog :\033[0m" << std::endl;
	delete c;
	std::cout << "\033[34;1mDestructeur Cat :\033[0m" << std::endl;
	delete b;
	std::cout << "\033[34;1mDestructeur Animal :\033[0m" << std::endl;
	delete a;
	return (0);
}