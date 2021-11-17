#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Bureaucrat.hpp"
#include "Form.hpp"

class Bureaucrat;

class RobotomyRequestForm : public Form{
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string const& target);
		RobotomyRequestForm(Form const& src);
		~RobotomyRequestForm();

		RobotomyRequestForm&	operator=(Form const& rhs);

		virtual void		execute(Bureaucrat const& by);
};

#endif