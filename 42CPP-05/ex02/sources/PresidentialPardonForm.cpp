#include "../includes/Bureaucrat.hpp"

//Constructeurs
PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5){
	//std::cout << "Form default constructor called." << std::endl;
	return;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const& target) : Form("PresidentialPardonForm", 25, 5){
	//std::cout << "Form default constructor called." << std::endl;
	setTarget(target);
	return;
}

PresidentialPardonForm::PresidentialPardonForm(Form const& src) : Form(src){
	//std::cout << "Form constructor called." << std::endl;
	*this = src;
	return;
}

//Destructeur
PresidentialPardonForm::~PresidentialPardonForm(){
	//std::cout << "Form destructor called." << std::endl;
	return;
}

//Operateurs
PresidentialPardonForm&	PresidentialPardonForm::operator=(Form const& rhs){
	(void)rhs;
	return (*this);
}

//Fonction membre
void	PresidentialPardonForm::execute(Bureaucrat const& by){
	if (getGradeToExec() < by.getGrade()){
		std::cout << by << " can't execute " << *this << "." << std::endl;
		throw GradeTooLowExeception();
	}
	if (getSigned() == false){
		std::cout << by << " can't execute " << *this << "." << std::endl;
		throw FormNotSigned();
	}
	std::cout << getTarget() << " as been forgiven by Zafob Beeblebrox !" << std::endl;
}
