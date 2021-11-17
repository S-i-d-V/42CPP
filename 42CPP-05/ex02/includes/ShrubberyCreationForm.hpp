#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Bureaucrat.hpp"
#include "Form.hpp"

class Bureaucrat;

class ShrubberyCreationForm : public Form{
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string const& target);
		ShrubberyCreationForm(Form const& src);
		~ShrubberyCreationForm();

		ShrubberyCreationForm&	operator=(Form const& rhs);

		virtual void		execute(Bureaucrat const& by);
};

#endif