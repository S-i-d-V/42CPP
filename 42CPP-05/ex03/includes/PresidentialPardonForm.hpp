#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Bureaucrat.hpp"
#include "Form.hpp"

class Bureaucrat;

class PresidentialPardonForm : public Form{
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string const& target);
		PresidentialPardonForm(Form const& src);
		~PresidentialPardonForm();

		PresidentialPardonForm&	operator=(Form const& rhs);

		virtual void		execute(Bureaucrat const& by);
};

#endif