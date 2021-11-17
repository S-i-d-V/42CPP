#include "includes/Bureaucrat.hpp"
#include "includes/Intern.hpp"

int	main(){
	try{
		Intern intern;
		Bureaucrat bob("Bob", 1);

		std::cout << "\033[34;1mCan sign all form\033[0m" << std::endl;
		Form *form1 = intern.makeForm("presidential pardon", "Jimmy Hendrix");
		Form *form2 = intern.makeForm("robotomy request", "John Rachid");
		Form *form3 = intern.makeForm("shrubbery creation", "Woodland");

		std::cout << std::endl << "\033[34;1mCan sign all form\033[0m" << std::endl;
		bob.signForm(*form1);
		bob.signForm(*form2);
		bob.signForm(*form3);

		std::cout << std::endl << "\033[34;1mCan execut all form\033[0m" << std::endl;
		std::cout << "\033[33mShrubberyCreationForm\033[0m" << std::endl;
		bob.executeForm(*form1);

		std::cout << "\033[33mPresidentialPardonForm\033[0m" << std::endl;
		bob.executeForm(*form2);

		std::cout << "\033[33mRobotomyRequestForm\033[0m" << std::endl;
		bob.executeForm(*form3);

		delete form1;
		delete form2;
		delete form3;

		std::cout << std::endl << "\033[34;1mTrying with an inexstant form\033[0m" << std::endl;
		Form *form4 = intern.makeForm("doesnt exist", "someone");
		(void)form4;
	}
	catch (std::exception& error){
		std::cout << "[\033[31;1mERROR\033[0m]" << error.what() << std::endl;
	}
	return (0);
}
