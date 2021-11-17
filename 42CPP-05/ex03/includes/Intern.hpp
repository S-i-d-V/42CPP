#ifndef INTERN_HPP
#define INTERN_HPP

#include "Bureaucrat.hpp"

class Form;

class Intern{
	public:
		Intern();
		Intern(Intern const& src);
		~Intern();

		Intern&	operator=(Intern const& rhs);

		Form*	makeForm(std::string const& name, std::string const& target);
		Form*	makePresidentialForm(std::string const& target);
		Form*	makeRobotomyForm(std::string const& target);
		Form*	makeShrubberyForm(std::string const& target);

		class InvalidFormName : public std::exception{
			char const* what() const throw(){
				return ("Invalid form name !");
			}
		};
		
	private:
		Form*		(Intern::*_funcTab[3])(std::string const& target);
		std::string _nameTab[3];
};

#endif