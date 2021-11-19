#include "../includes/Form.hpp"

//Exceptions
char const* Form::GradeTooHighException::what() const throw(){
	return ("Form's grade required is too high !");
}

char const* Form::GradeTooLowException::what() const throw(){
	return ("Form's grade required is too low !");
}

char const* Form::FormNotSignedException::what() const throw(){
	return ("Form not signed yet !");
}

//Constructeur
Form::Form() : _name("default"),  _gradeToSign(1), _gradeToExec(1){
	//std::cout << "Form default constructor called." << std::endl;
	_signed = false;
	_target = "";
	return;
}

Form::Form(std::string name, int gradeToSign, int gradeToExec) : _name(name), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec){
	if (gradeToSign > 150 || gradeToExec > 150)
		throw GradeTooLowException();
	else if (gradeToSign < 1 || gradeToExec < 1)
		throw GradeTooHighException();
	//std::cout << "Form constructor called." << std::endl;
	_signed = false;
	_target = "";
	return;
}

Form::Form(Form const& src) : _name(src._name), _gradeToSign(src._gradeToSign), _gradeToExec(src._gradeToExec){
	//std::cout << "Form constructor called." << std::endl;
	*this = src;
	return;
}

Form::~Form(){
	//std::cout << "Form destructor called." << std::endl;
	return;
}

//Operateurs
Form&	Form::operator=(Form const& rhs){
	_signed = rhs._signed;
	_target = rhs._target;
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, Form const& rhs){
	os << rhs.getName();
	if (rhs.getSigned() == true)
		os << ", signed (GradeToSign=";
	else
		os << ", not signed (GradeToSign=";
	os << rhs.getGradeToSign() << ", GradeToExec=" << rhs.getGradeToExec() << ")";
	return (os);
}

//Getters
std::string const	Form::getName() const{
	return (_name);
}

int	Form::getGradeToSign() const{
	return (_gradeToSign);
}

int	Form::getGradeToExec() const{
	return (_gradeToExec);
}

bool	Form::getSigned() const{
	return (_signed);
}

std::string	Form::getTarget() const{
	return (_target);
}

//Setters
void	Form::setTarget(std::string target){
	_target = target;
}

//Fonctions membres
void	Form::beSigned(Bureaucrat& by){
	if (_gradeToSign < by.getGrade()){
		std::cout << by << " can't sign " << *this << "." << std::endl;
		throw GradeTooLowException();
	}
	_signed = true;
}
