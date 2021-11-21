#include "includes/Base.hpp"
#include "includes/A.hpp"
#include "includes/B.hpp"
#include "includes/C.hpp"

Base	*generate(){
	std::srand(time(NULL));
	int ran = std::rand() % 3;
	Base* ret = 0;

    if (ran == 0)
		ret = new A;
	else if (ran == 1)
		ret = new B;
	else
		ret = new C;
	return (ret);
}

void	identify(Base* p){
	if ( dynamic_cast<A*>(p) != NULL)
		std::cout << "A" << std::endl;
	else if ( dynamic_cast<B*>(p) != NULL)
		std::cout << "B" << std::endl;
	else if ( dynamic_cast<C*>(p) != NULL)
		std::cout << "C" << std::endl;
}

void	identify(Base& p){
	identify(&p);
}

int	main(){
	//Idenity with generate*
	std::cout << "\033[34;1mBy pointer\033[0m" << std::endl;
	Base* ptr = generate();
	identify(ptr);

	//Identify with ref;
	std::cout << std::endl << "\033[34;1mBy reference\033[0m" << std::endl;
	Base &ref = *ptr;
	identify(ref);

	return (0);
}