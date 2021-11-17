#include "includes/Bureaucrat.hpp"

int	main(){
	try{
		std::cout << "\033[34;1mCan sign but not execute\033[0m" << std::endl;
		PresidentialPardonForm	form("someone");
		Bureaucrat				bob("Bob", 24);

		std::cout << form << std::endl;
		std::cout << bob << std::endl << std::endl;

		bob.signForm(form);
		bob.executeForm(form);
	}
	catch (std::exception& error){
		std::cout << "[\033[31;1mERROR\033[0m]" << error.what() << std::endl;
	}

	try{
		std::cout << std::endl << "\033[34;1mCan execut but not signed\033[0m" << std::endl;
		PresidentialPardonForm	form("someone");
		Bureaucrat				bob("Bob", 1);

		std::cout << form << std::endl;
		std::cout << bob << std::endl << std::endl;

		bob.executeForm(form);
	}
	catch (std::exception& error){
		std::cout << "[\033[31;1mERROR\033[0m]" << error.what() << std::endl;
	}

	try{
		std::cout << std::endl << "\033[34;1mCan't sign\033[0m" << std::endl;
		RobotomyRequestForm		form("someone");
		Bureaucrat				bob("Bob", 79);

		std::cout << form << std::endl;
		std::cout << bob << std::endl << std::endl;

		bob.signForm(form);
	}
	catch (std::exception& error){
		std::cout << "[\033[31;1mERROR\033[0m]" << error.what() << std::endl;
	}

	try{
		ShrubberyCreationForm	form1("someone");
		PresidentialPardonForm	form2("someone");
		RobotomyRequestForm		form3("someone");
		Bureaucrat				bob("Bob", 1);

		std::cout << std::endl << "\033[34;1mAll forms an an Elite Bureaucrat\033[0m" << std::endl;
		std::cout << form1 << std::endl;
		std::cout << form2 << std::endl;
		std::cout << form3 << std::endl;
		std::cout << bob << std::endl << std::endl;

		std::cout << std::endl << "\033[34;1mCan sign all form\033[0m" << std::endl;
		bob.signForm(form1);
		bob.signForm(form2);
		bob.signForm(form3);

		std::cout << std::endl << "\033[34;1mCan execut all form\033[0m" << std::endl;
		std::cout << "\033[33mShrubberyCreationForm\033[0m" << std::endl;
		bob.executeForm(form1);

		std::cout << "\033[33mPresidentialPardonForm\033[0m" << std::endl;
		bob.executeForm(form2);

		std::cout << "\033[33mRobotomyRequestForm\033[0m" << std::endl;
		bob.executeForm(form3);
	}
	catch (std::exception& error){
		std::cout << "[\033[31;1mERROR\033[0m]" << error.what() << std::endl;
	}

	return (0);
}
