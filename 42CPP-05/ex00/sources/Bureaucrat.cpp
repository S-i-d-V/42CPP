#include "../includes/Bureaucrat.hpp"

//Constructeurs
Bureaucrat::Bureaucrat() : _name("default"){
	std::cout << "Bureaucrat default constructor called." << std::endl;
	_grade = 150;
	return;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name){
	try{
		std::cout << "Bureaucrat constructor called." << std::endl;
		_grade = grade;
		if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	}
	catch (GradeTooLowException &error){
		_grade = 150;
		std::cout << error.what() << std::endl;
	}
	catch (GradeTooHighException &error){
		_grade = 1;
		std::cout << error.what() << std::endl;
	}
	return;
}

Bureaucrat::Bureaucrat(Bureaucrat const& src) : _name(src._name){
	std::cout << "Bureaucrat copy constructor called." << std::endl;
	*this = src;
	return;
}

//Destructeur
Bureaucrat::~Bureaucrat(){
	std::cout << "Bureaucrat destructor called." << std::endl;
	return;
}

//Operateurs
Bureaucrat&			Bureaucrat::operator=(Bureaucrat const& rhs){
	_grade = rhs._grade;
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, Bureaucrat const& rhs){
	os << rhs.getName() << ", grade " << rhs.getGrade();
	return (os);
}

//Getters
std::string const	Bureaucrat::getName() const{
	return (_name);
}

int	Bureaucrat::getGrade() const{
	return (_grade);
}


//Fonctions membres
void	Bureaucrat::incrementGrade(){
	try{
		_grade--;
		if (_grade < 1){
			throw GradeTooHighException();
		}
	}
	catch (std::exception& error){
		_grade++;
		std::cout << error.what() << std::endl;
	}
}

void	Bureaucrat::decrementGrade(){
	try{
		_grade++;
		if (_grade > 150){
			throw GradeTooLowException();
		}
	}
	catch (std::exception& error){
		_grade--;
		std::cout << error.what() << std::endl;
	}
}
