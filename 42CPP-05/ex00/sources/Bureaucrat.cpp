#include "../includes/Bureaucrat.hpp"

//Exceptions
char const* Bureaucrat::GradeTooHighException::what() const throw(){
	return ("Bureaucrat's grade is too high !");
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
	return ("Bureaucrat's Bureaucrat's grade is too low !");
}

//Constructeurs
Bureaucrat::Bureaucrat() : _name("default"){
	//std::cout << "Bureaucrat default constructor called." << std::endl;
	_grade = 150;
	return;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name){
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	//std::cout << "Bureaucrat constructor called." << std::endl;
	_grade = grade;
	return;
}

Bureaucrat::Bureaucrat(Bureaucrat const& src) : _name(src._name){
	//std::cout << "Bureaucrat copy constructor called." << std::endl;
	*this = src;
	return;
}

//Destructeur
Bureaucrat::~Bureaucrat(){
	//std::cout << "Bureaucrat destructor called." << std::endl;
	return;
}

//Operateurs
Bureaucrat&			Bureaucrat::operator=(Bureaucrat const& rhs){
	_grade = rhs._grade;
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, Bureaucrat const& rhs){
	os << rhs.getName() << ", Bureaucraft (grade=" << rhs.getGrade() << ")";
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
	if (_grade - 1 < 1)
		throw GradeTooHighException();
	_grade--;
}

void	Bureaucrat::decrementGrade(){
	if (_grade + 1 > 150)
		throw GradeTooLowException();
	_grade++;
}
