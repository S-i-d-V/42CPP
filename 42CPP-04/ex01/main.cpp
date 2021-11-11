#include "includes/Animal.hpp"
#include "includes/WrongAnimal.hpp"

int	main(){
	std::cout << "\033[34;1mConstructeur Animal :\033[0m" << std::endl;
	Animal* a = new Animal();
	std::cout << "\033[34;1mConstructeur Cat :\033[0m" << std::endl;
	Animal* b = new Cat();
	std::cout << "\033[34;1mConstructeur Dog :\033[0m" << std::endl;
	Animal* c = new Dog();
	std::cout << "\033[34;1mConstructeur WrongAnimal :\033[0m" << std::endl;
	WrongAnimal* d = new WrongAnimal();
	std::cout << "\033[34;1mConstructeur WrongCat :\033[0m" << std::endl;
	WrongAnimal* e = new WrongCat();

	std::cout << std::endl << "\033[34;1mFonctions makeSound (Animals):\033[0m" << std::endl;
	a->makeSound();
	b->makeSound();
	c->makeSound();
	std::cout << std::endl << "\033[34;1mFonctions makeSound (WrongAnimals):\033[0m" << std::endl;
	d->makeSound();
	e->makeSound();

	delete a;
	delete b;
	delete c;
	delete d;
	delete e;

	return (0);
}