#include "../includes/Bureaucrat.hpp"

#include <fstream>
#include <iostream>

//Constructeurs
ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137){
	//std::cout << "Form default constructor called." << std::endl;
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const& target) : Form("ShrubberyCreationForm", 145, 137){
	//std::cout << "Form default constructor called." << std::endl;
	setTarget(target);
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(Form const& src) : Form(src){
	//std::cout << "Form constructor called." << std::endl;
	*this = src;
	return;
}

//Destructeur
ShrubberyCreationForm::~ShrubberyCreationForm(){
	//std::cout << "Form destructor called." << std::endl;
	return;
}

//Operateurs
ShrubberyCreationForm&	ShrubberyCreationForm::operator=(Form const& rhs){
	(void)rhs;
	return (*this);
}

//Fonction membre
void	ShrubberyCreationForm::execute(Bureaucrat const& by){
	if (getSigned() == false){
		std::cout << by << " can't execute " << *this << "." << std::endl;
		throw FormNotSignedException();
	}
	if (getGradeToExec() < by.getGrade()){
		std::cout << by << " can't execute " << *this << "." << std::endl;
		throw Bureaucrat::GradeTooLowException();
	}
	std::ofstream myFile;

	myFile.open(getTarget());
	myFile << "       _-_			" << std::endl;
	myFile << "    /~~   ~~\\		" << std::endl;
	myFile << " /~~         ~~\\	" << std::endl;
	myFile << "{               }	" << std::endl;
	myFile << " \\  _-     -_  /	" << std::endl;
	myFile << "   ~  \\\\ //  ~		" << std::endl;
	myFile << "_- -   | | _- _		" << std::endl;
	myFile << "  _ -  | |   -_		" << std::endl;
	myFile << "      // \\\\		" << std::endl;
	myFile.close();
	std::cout << "A tree has been planted in " << getTarget() << std::endl;
}