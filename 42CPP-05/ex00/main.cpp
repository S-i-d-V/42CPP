#include "includes/Bureaucrat.hpp"

int	main(){
	//Exception constructeur
	try{
		std::cout << "\033[34;1mConstructor GradeTooHighExeception\033[0m" << std::endl;
		Bureaucrat high("tooHigh", 0);
	}
	catch (std::exception& error){
		std::cout << "[\033[31;1mERROR\033[0m]" << error.what() << std::endl;
	}
	try{
		std::cout << std::endl << "\033[34;1mConstructor GradeTooLowExeception\033[0m" << std::endl;
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

		std::cout << std::endl << "\033[34;1mIncrement\033[0m" << std::endl;
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
		bob.incrementGrade();
	}
	catch (std::exception& error){
		std::cout << "[\033[31;1mERROR\033[0m]" << error.what() << std::endl;
	}
	try{
		std::cout << std::endl << "\033[34;1mIncrement GradeTooHighException\033[0m" << std::endl;
		Bureaucrat bob("Bob", 150);
		bob.decrementGrade();
	}
	catch (std::exception& error){
		std::cout << "[\033[31;1mERROR\033[0m]" << error.what() << std::endl;
	}

	return (0);
}