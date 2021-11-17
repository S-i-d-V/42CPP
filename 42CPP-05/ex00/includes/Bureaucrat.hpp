#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <iomanip>
#include <stdexcept>

class Bureaucrat{
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const& src);
		~Bureaucrat();

		Bureaucrat&			operator=(Bureaucrat const& rhs);

		void				incrementGrade();
		void				decrementGrade();

		std::string const	getName() const;
		int					getGrade() const;

		class GradeTooHighException : public std::exception{
			public:
				const char* what() const throw(){
					return ("Bureaucrat's grade is too high !");
				}
		};

		class GradeTooLowException : public std::exception{
			public:
				const char* what() const throw(){
					return ("Bureaucrat's Form's grade required is too low !");
				}
		};

	private:
		std::string const	_name;
		int					_grade;
};

std::ostream&			operator<<(std::ostream& os, Bureaucrat const& rhs);

#endif