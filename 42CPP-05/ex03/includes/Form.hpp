#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form{
	public:
		Form();
		Form(std::string name, int gradeToExec, int gradeToSign);
		Form(Form const& src);
		virtual ~Form();

		Form&	operator=(Form const& rhs);

		std::string const	getName() const;
		int					getGradeToSign() const;
		int 				getGradeToExec() const;
		bool				getSigned() const;
		std::string			getTarget() const;

		void				setTarget(std::string target);

		void				beSigned(Bureaucrat& by);

		virtual void		execute(Bureaucrat const& by) = 0;

		class GradeTooHighException : public std::exception{
			char const* what() const throw();
		};

		class GradeTooLowException : public std::exception{
			char const* what() const throw();
		};

		class FormNotSignedException : public std::exception{
			char const* what() const throw();
		};

	private:
		std::string const	_name;
		bool			_signed;
		int	const		_gradeToSign;
		int const		_gradeToExec;
		std::string		_target;
};

#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

std::ostream&	operator<<(std::ostream& os, Form const& rhs);

#endif