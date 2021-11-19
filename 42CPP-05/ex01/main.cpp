#include "includes/Bureaucrat.hpp"

int	main(){
	//Exception constructeur
	try{
		std::cout << "\033[34;1mConstructor GradeTooHighException\033[0m" << std::endl;
		Form high("tooHigh", 0, 0);
	}
	catch (std::exception& error){
		std::cout << "[\033[31;1mERROR\033[0m]" << error.what() << std::endl;
	}
	try{
		std::cout << std::endl << "\033[34;1mConstructor GradeTooLowException\033[0m" << std::endl;
		Form low("tooLow", 151, 151);
	}
	catch (std::exception& error){
		std::cout << "[\033[31;1mERROR\033[0m]" << error.what() << std::endl;
	}

	//Exceptions fonctions membres
	try{
		std::cout << std::endl << "\033[34;1mBob can sign this\033[0m" << std::endl;
		Bureaucrat	bob("Bob", 50);
		Form		contract("Contract", 51, 51);

		bob.signForm(contract);
	}
	catch (std::exception& error){
		std::cout << "[\033[31;1mERROR\033[0m]" << error.what() << std::endl;
	}
	try{
		std::cout << std::endl << "\033[34;1mBob can't sign this (GradeTooLowException)\033[0m" << std::endl;
		Bureaucrat	bob("Bob", 50);
		Form		contract("Contract", 49, 49);

		bob.signForm(contract);
	}
	catch (std::exception& error){
		std::cout << "[\033[31;1mERROR\033[0m]" << error.what() << std::endl;
	}

	return (0);
}