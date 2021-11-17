#include "includes/Bureaucrat.hpp"

int	main(){
	//Exeception by constructor
	std::cout << std::endl << "\033[31;1mException by constructor\033[0m" << std::endl;
	{
		std::cout << "\033[34;1mConstructeurs :\033[0m" << std::endl;
		Bureaucrat high("Bob", 0);
		Bureaucrat low("Bob", 151);

		std::cout << std::endl << "\033[34;1mGradeTooHighException default value :\033[0m" << std::endl;
		std::cout << high << std::endl;
		std::cout << "\033[34;1mGradeTooLowException default value :\033[0m" << std::endl;
		std::cout << low << std::endl;

		std::cout << std::endl << "\033[34;1mDestructeurs :\033[0m" << std::endl;
	}

	//Exeception by member functions
	std::cout << std::endl << "\033[31;1mException by increment/decrement functions\033[0m" << std::endl;
	{
		std::cout << "\033[34;1mConstructeurs :\033[0m" << std::endl;
		Bureaucrat bob("Bob", 1);
		std::cout << std::endl << "\033[34;1mGradeTooHighException by incrementation :\033[0m" << std::endl;
		bob.incrementGrade();

		std::cout << std::endl << "\033[34;1mGradeTooHighException by decrementation :\033[0m" << std::endl;
		for (int i = 0; i < 150; i++)
			bob.decrementGrade();

		std::cout << std::endl << "\033[34;1mDestructeurs :\033[0m" << std::endl;
	}

	return (0);
}