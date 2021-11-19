#include "../includes/Bureaucrat.hpp"
#include <random>

//Constructeurs
RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45){
	//std::cout << "Form default constructor called." << std::endl;
	return;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const& target) : Form("RobotomyRequestForm", 72, 45){
	//std::cout << "Form default constructor called." << std::endl;
	setTarget(target);
	return;
}

RobotomyRequestForm::RobotomyRequestForm(Form const& src) : Form(src){
	//std::cout << "Form constructor called." << std::endl;
	*this = src;
	return;
}

//Destructeur
RobotomyRequestForm::~RobotomyRequestForm(){
	//std::cout << "Form destructor called." << std::endl;
	return;
}

//Operateurs
RobotomyRequestForm&	RobotomyRequestForm::operator=(Form const& rhs){
	(void)rhs;
	return (*this);
}

//Fonction membre
void	RobotomyRequestForm::execute(Bureaucrat const& by){
	if (getSigned() == false){
		std::cout << by << " can't execute " << *this << "." << std::endl;
		throw FormNotSignedException();
	}
	if (getGradeToExec() < by.getGrade()){
		std::cout << by << " can't execute " << *this << "." << std::endl;
		throw Bureaucrat::GradeTooLowException();
	}
	std::cout << "* Mecanic noise *" << std::endl;
	srand(time(NULL));
	if ((rand() % 2) == 0)
		std::cout << getTarget() << " has been robotized !" << std::endl;
	else
		std::cout << "Robotization failed !" << std::endl;
	std::cout << "* Mecanic noise *" << std::endl;
}