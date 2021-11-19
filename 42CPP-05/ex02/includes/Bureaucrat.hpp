#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <iomanip>
#include <stdexcept>

#include "Form.hpp"

class Form;

class Bureaucrat{
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const& src);
		~Bureaucrat();

		Bureaucrat&			operator=(Bureaucrat const& rhs);

		void				incrementGrade();
		void				decrementGrade();

		void				signForm(Form& toSign);
		void				executeForm(Form& toExec);

		std::string const	getName() const;
		int					getGrade() const;

		class GradeTooHighException : public std::exception{
				char const* what() const throw();
		};

		class GradeTooLowException : public std::exception{
				const char* what() const throw();
		};

	private:
		std::string const	_name;
		int					_grade;
};

std::ostream&			operator<<(std::ostream& os, Bureaucrat const& rhs);

#endif