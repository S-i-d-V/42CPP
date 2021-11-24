#include "includes/AMateria.hpp"
#include "includes/Ice.hpp"
#include "includes/Cure.hpp"
#include "includes/Character.hpp"
#include "includes/MateriaSource.hpp"

int	main(){
	std::cout << "\033[34;1mAdding 4 Materias to MateriaSources :\033[0m" << std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	std::cout << "\033[33mTrying to add one more materia :\033[0m" << std::endl;
	src->learnMateria(new Cure());
	std::cout << "Nothing happen." << std::endl;
	
	std::cout << std::endl << "\033[34;1mEquiping 4 Materias :\033[0m" << std::endl;
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	std::cout << "\033[33mTrying to equip one more materia :\033[0m" << std::endl;
	tmp = src->createMateria("cure");
	me->equip(tmp);
	std::cout << "Nothing happen." << std::endl;

	std::cout << std::endl << "\033[34;1mMain output :\033[0m" << std::endl;
	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete tmp;
	delete bob;
	delete me;
	delete src;

	return 0;
}