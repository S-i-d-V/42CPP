#include "includes/Bureaucrat.hpp"

int	main(){
	//Exception constructeur
	try{
		std::cout << "\033[34;1mConstructor GradeTooHighException\033[0m" << std::endl;
		std::cout << "\033[33mCreation d'un grade 0\033[0m" << std::endl;
		Bureaucrat high("tooHigh", 0);
	}
	catch (std::exception& error){
		std::cout << "[\033[31;1mERROR\033[0m]" << error.what() << std::endl;
	}
	try{
		std::cout << std::endl << "\033[34;1mConstructor GradeTooLowException\033[0m" << std::endl;
		std::cout << "\033[33mCreation d'un grade 151\033[0m" << std::endl;
		Bureaucrat low("tooLow", 151);
	}
	catch (std::exception& error){
		std::cout << "[\033[31;1mERROR\033[0m]" << error.what() << std::endl;
	}

	//Fonctions membres qui marchent
	try{
		std::cout << std::endl << "\033[34;1mIncrement\033[0m" << std::endl;
		Bureaucrat bob("Bob", 50);
		
		std::cout << bob << std::endl;
		for (int i = 0; i < 49; i++)
			bob.incrementGrade();
		std::cout << bob << std::endl;

		std::cout << std::endl << "\033[34;1mDecrement\033[0m" << std::endl;
		std::cout << bob << std::endl;
		for (int i = 0; i < 49; i++)
			bob.decrementGrade();
		std::cout << bob << std::endl;
	}
	catch (std::exception& error){
		std::cout << "[\033[31;1mERROR\033[0m]" << error.what() << std::endl;
	}

	//Exceptions fonctions membres
	try{
		std::cout << std::endl << "\033[34;1mIncrement GradeTooHighException\033[0m" << std::endl;
		Bureaucrat bob("Bob", 1);
		std::cout << "\033[33mIncrementation de\033[33m" << bob << "\033[0m" << std::endl;
		bob.incrementGrade();
	}
	catch (std::exception& error){
		std::cout << "[\033[31;1mERROR\033[0m]" << error.what() << std::endl;
	}
	try{
		std::cout << std::endl << "\033[34;1mDecrement GradeTooHighException\033[0m" << std::endl;
		Bureaucrat bob("Bob", 150);
		std::cout << "\033[33mDecrementation de\033[33m" << bob << "\033[0m" << std::endl;
		bob.decrementGrade();
	}
	catch (std::exception& error){
		std::cout << "[\033[31;1mERROR\033[0m]" << error.what() << std::endl;
	}

	return (0);
}