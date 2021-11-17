#include "includes/Bureaucrat.hpp"

int	main(){
	{
		std::cout << "\033[34;1mConstructor\033[0m" << std::endl;
		Bureaucrat	Bob("Bob", 50);
		Form		LowForm("Formulaire", 50, 50);
	
		std::cout << std::endl << "\033[34;1mSignature\033[0m" << std::endl;
		Bob.signForm(LowForm);
	
		std::cout << std::endl << "\033[34;1mSignature\033[0m" << std::endl;
		Bob.signForm(LowForm);
	
		std::cout << std::endl << "\033[34;1mDestructor\033[0m" << std::endl;
	}
	return (0);
}