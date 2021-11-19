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
	A*	a = dynamic_cast<A*>(p);
	B*	b = dynamic_cast<B*>(p);
	C*	c = dynamic_cast<C*>(p);
	
	if (a != NULL)
		std::cout << "A" << std::endl;
	else if (b != NULL)
		std::cout << "B" << std::endl;
	else if (c != NULL)
		std::cout << "C" << std::endl;
}

void	identify(Base& p){
	try{
		A&	a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "A" << std::endl;
	}
	catch (std::bad_cast &error){
	}
	try{
		B&	b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "B" << std::endl;
	}
	catch (std::bad_cast &error){
	}
	try{
		C&	c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "C" << std::endl;
	}
	catch (std::bad_cast &error){
	}
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