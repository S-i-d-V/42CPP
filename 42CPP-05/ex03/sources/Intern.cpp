#include "../includes/Form.hpp"
#include "../includes/Intern.hpp"

//Constructeurs
Intern::Intern(){
	_funcTab[0] = &Intern::makePresidentialForm;
	_funcTab[1] = &Intern::makeRobotomyForm;
	_funcTab[2] = &Intern::makeShrubberyForm;
	_nameTab[0] = "presidential pardon";
	_nameTab[1] = "robotomy request";
	_nameTab[2] = "shrubbery creation";
	return;
}

Intern::Intern(Intern const& src){
	*this = src;
	return;
}

//Destructeur
Intern::~Intern(){
	return;
}

//Operateurs
Intern&	Intern::operator=(Intern const& rhs){
	(void)rhs;
	return (*this);
}

//Fontions membres
Form*	Intern::makePresidentialForm(std::string const& target){
	return (new PresidentialPardonForm(target));
}

Form*	Intern::makeRobotomyForm(std::string const& target){
	return (new RobotomyRequestForm(target));
}

Form*	Intern::makeShrubberyForm(std::string const& target){
	return (new ShrubberyCreationForm(target));
}

Form*	Intern::makeForm(std::string const& formName, std::string const& target){
	int i = 0;
	while (i < 3){
		if (formName == _nameTab[i])
			break;
		i++;
	}
	if (i == 3)
		throw InvalidFormName();
	Form* ret = (this->*_funcTab[i])(target);
	std::cout << "Intern creates " << *ret << std::endl;
	return (ret);
}