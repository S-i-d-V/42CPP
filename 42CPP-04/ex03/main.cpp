#include "includes/AMateria.hpp"
#include "includes/Ice.hpp"
#include "includes/Cure.hpp"
#include "includes/Character.hpp"
#include "includes/MateriaSource.hpp"

int	main(){
	std::cout << "\033[34;1mMain test du sujet :\033[0m" << std::endl;{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		ICharacter* me = new Character("me");

		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		//me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);

		ICharacter* bob = new Character("bob");

		//tmp = src->createMateria("ice");
		//bob->equip(tmp);
		//bob = me;

		me->use(0, *bob);
		me->use(1, *bob);


		delete bob;
		delete me;
		delete src;
	}

	return 0;
}