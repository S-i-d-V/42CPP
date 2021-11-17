#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form{
	public:
		Form();
		Form(std::string name, int gradeToExec, int gradeToSign);
		Form(Form const& src);
		~Form();

		Form&	operator=(Form const& rhs);

		std::string const	getName() const;
		int					getGradeToSign() const;
		int 				getGradeToExec() const;
		bool				getSigned() const;

		void				beSigned(Bureaucrat& by);

		class GradeTooHighExeception : public std::exception{
			char const* what() const throw(){
				return ("Le grade est trop haut !");
			}
		};

		class GradeTooLowExeception : public std::exception{
			char const* what() const throw(){
				return ("Le grade est trop bas !");
			}
		};

	private:
		std::string const	_name;
		bool			_signed;
		int	const		_gradeToSign;
		int const		_gradeToExec;
};

std::ostream&	operator<<(std::ostream& os, Form const& rhs);

#endif